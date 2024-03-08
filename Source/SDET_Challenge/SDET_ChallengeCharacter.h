// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "SDET_ChallengeCharacter.generated.h"


UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeathTriggerDelegate);

UCLASS(config=Game)
class ASDET_ChallengeCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

public:
	ASDET_ChallengeCharacter();
	

protected:

    bool canMove = true;
    
	/** Called for movement input */
    UFUNCTION(BlueprintCallable)
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
    
    
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float currentHealth;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float maxHealth = 20.f;
    
public:
    UFUNCTION(BlueprintCallable)
    float GetCurrentHealth();
    
    UFUNCTION(BlueprintCallable)
    float GetMaxHealth();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHealth(float amount);
    
    UFUNCTION(BlueprintCallable)
    void DamageCharacter(float amount);
    
    UFUNCTION(BlueprintCallable)
    void HealCharacter(float amount);
    
    UFUNCTION(BlueprintCallable)
    void HealCharacterByPercent(float percent);

    UPROPERTY(BlueprintAssignable)
    FDeathTriggerDelegate OnPlayerDeath;
    
    UFUNCTION(BlueprintCallable)
    void PlayerDeathEvent();
    
    
};

