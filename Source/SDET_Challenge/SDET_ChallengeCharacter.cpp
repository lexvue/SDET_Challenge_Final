// Copyright Epic Games, Inc. All Rights Reserved.

#include "SDET_ChallengeCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components/BoxComponent.h"


//////////////////////////////////////////////////////////////////////////
// ASDET_ChallengeCharacter

ASDET_ChallengeCharacter::ASDET_ChallengeCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
    
    

    
}

void ASDET_ChallengeCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

    currentHealth = maxHealth;
    
	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void ASDET_ChallengeCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ASDET_ChallengeCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ASDET_ChallengeCharacter::Look);

	}

}

void ASDET_ChallengeCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr && canMove)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ASDET_ChallengeCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}


float ASDET_ChallengeCharacter::GetCurrentHealth() {
    return currentHealth;
}

float ASDET_ChallengeCharacter::GetMaxHealth() {
    return maxHealth;
}

void ASDET_ChallengeCharacter::SetCurrentHealth(float amount) {
    currentHealth = amount;
}


void ASDET_ChallengeCharacter::DamageCharacter(float amount) {
    currentHealth = (currentHealth - amount) < 0.f ? 0.f : (currentHealth - amount);
    
    //UE_LOG(LogTemp, Warning, TEXT("///////// Health is now: %f"), currentHealth);
    
    FString DebugMsg = FString::Printf(TEXT("///////// Health is now: %f"), currentHealth);
    GEngine->AddOnScreenDebugMessage(2, 2.0f, FColor::Green, DebugMsg);
    
    if (currentHealth <= 0.f) {
        //UE_LOG(LogTemp, Warning, TEXT("///////// Health is now: %f"), currentHealth);
        
        DebugMsg = FString::Printf(TEXT("///////// Health is now: %f"), currentHealth);
        GEngine->AddOnScreenDebugMessage(2, 2.0f, FColor::Red, DebugMsg);
        
        PlayerDeathEvent();
    }
}

void ASDET_ChallengeCharacter::HealCharacter(float amount) {
    currentHealth = (currentHealth + amount) > maxHealth ? maxHealth : (currentHealth + amount);
    
    //UE_LOG(LogTemp, Warning, TEXT("///////// Health is now: %f"), currentHealth);
    
    FString DebugMsg = FString::Printf(TEXT("///////// Health is now: %f"), currentHealth);
    GEngine->AddOnScreenDebugMessage(2, 2.0f, FColor::Green, DebugMsg);
}

void ASDET_ChallengeCharacter::HealCharacterByPercent(float percent) {
    float portionOfMaxHealth = maxHealth * percent;
    currentHealth = (currentHealth + portionOfMaxHealth) > maxHealth ? maxHealth : (currentHealth + portionOfMaxHealth);
    
    //UE_LOG(LogTemp, Warning, TEXT("///////// Health is now: %f"), currentHealth);
    
    FString DebugMsg = FString::Printf(TEXT("///////// Health is now: %f"), currentHealth);
    GEngine->AddOnScreenDebugMessage(2, 2.0f, FColor::Green, DebugMsg);
}


void ASDET_ChallengeCharacter::PlayerDeathEvent() {
 
    canMove = false;
    OnPlayerDeath.Broadcast();
}
