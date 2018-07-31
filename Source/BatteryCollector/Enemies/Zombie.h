// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Zombie.generated.h"

class ABatteryCollectorCharacter;

UCLASS()
class BATTERYCOLLECTOR_API AZombie : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AZombie();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Set this zombie's target. The base version of this function will handle updating TargetActor and T .
	UFUNCTION(BlueprintCallable, Category = "AI")
	void SetTarget(AActor* NewTarget);

	// Return the target Actor. Returning NULL indicates no target.
	UFUNCTION(BlueprintCallable, Category = "AI")
	AActor* GetTarget();

	// Return the target Actor as a BatteryCollectorCharacter, if possible. Returning NULL indicates no target, or that the BatteryCollectorCharacter .
	UFUNCTION(BlueprintCallable, Category = "AI")
	ABatteryCollectorCharacter* GetTargetAsBatteryCollectorCharacter();

	// Zombies will call this on Tick.
	UFUNCTION(BlueprintNativeEvent, Category = "AI")
	void ZombieAI();
	virtual void ZombieAI_Implementation();

	// This function asks the zombie if it is in position to attack its current target. It does not actually
	UFUNCTION(BlueprintNativeEvent, Category = "AI")
	bool ZombieAIShouldAttack();
	virtual bool ZombieAIShouldAttack_Implementation();

	// This can be used to animate walking.
	UFUNCTION(BlueprintImplementableEvent, Category = "AI")
	bool ZombieWalk(float DeltaSeconds, FVector DistanceWalkedThisFrame);

	// This can be used to start attack animations.
	UFUNCTION(BlueprintImplementableEvent, Category = "AI")
	bool ZombieAttack(float DeltaSeconds);
	
	/** Add rotation equal to the yaw (in degrees) provided. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|Input", meta = (Keywords = "AddInput"))
	virtual void AddRotationInput(float DeltaYawDegrees);
	
	/** Get rotation input. Returns pre-clear value. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|Input", meta = (Keywords = "ConsumeInput"))
	virtual float GetRotationInput();
	
	/** Get (and clear) rotation input. Returns pre-clear value. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|Input", meta = (Keywords = "ConsumeInput"))
	virtual float ConsumeRotationInput();
	
	/** Press the attack button. The pawn will know what to do with this. No arguments because it's a bool */
	UFUNCTION(BlueprintCallable, Category = "Pawn|Input", meta = (Keywords = "AddInput"))
	virtual void AddAttackInput();
	
	/** Get the status of the attack button. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|Input", meta = (Keywords = "ConsumeInput"))
	virtual bool GetAttackInput();
	
	/** Get (and clear) the status of the attack button. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|Input", meta = (Keywords = "ConsumeInput"))
	virtual bool ConsumeAttackInput();
	
private:
	/** The actor we're targeting. Will be NULL if there is not target. */
	UPROPERTY(VisibleInstanceOnly, Category = "AI")
	AActor* TargetActor;

	/** The actor we're targeting, cast to a BatteryCollectorCharacter and cached. Will be NULL if no target if the target a . */
	UPROPERTY(VisibleInstanceOnly, Category = "AI")
	ABatteryCollectorCharacter* TargetBatteryCollectorCharacter;
	
protected:
	/** Camera effect, if any, to play when the player is hit by this Zombie. */
	UPROPERTY(EditAnywhere)
	TSubclassOf<UCameraShake> HitShake;
	
	/** Current health value. Might be fun to have different values for different attack types, e.g. fire . */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float Health;

	/** Sight distance (when not target is present). */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float SightDistance;

	/** Sight half-angle in degrees (when not target is present). */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float SightAngle;

	/** Max yaw speed per second in degrees. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float YawSpeed;

	/** Speed when wandering around, or when facing away from the target. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float WalkSpeed;

	/** Speed when running toward target. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float RunSpeed;

	/** Attack distance. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float AttackDistance;

	/** Half-angle (in degrees) for our attack. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float AttackAngle;

	/** Minimum time between attacks. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float AttackCooldown;
	
	/** Game time, in seconds, when the Zombie will be allowed to attack again. */
	UPROPERTY(Transient, VisibleInstanceOnly, BlueprintReadWrite, Category = "Zombie")
	float AttackAvailableTime;
	
private:
	// Current rotation input
	float YawInput;

	// Current attack button status
	uint32 bAttackInput : 1;
};
