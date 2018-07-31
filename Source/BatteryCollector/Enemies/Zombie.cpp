// Fill out your copyright notice in the Description page of Project Settings.

#include "Zombie.h"
#include "BatteryCollector.h"
#include "BatteryCollectorCharacter.h"


// Sets default values
AZombie::AZombie()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	
	Health = 100.0f;
	SightDistance = 500.0f;
	SightAngle = 60.0f;
	YawSpeed = 90.0f;
	WalkSpeed = 25.0f;
	RunSpeed = 45.0f;
	AttackDistance = 100.0f;
	AttackAngle = 30.0f;
	AttackCooldown = 1.0f;
}

// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AZombie::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

bool AZombie::ZombieAI_Implementation()
{
	// The zombie always moves unless attacking. If moving, it moves between WalkSpeed and RunSpeed.
	FVector DesiredMovement = GetAttackInput() ? FVector::ZeroVector : (FMath::GetMappedRangeValueClamped(FVector2D(0.0f, 1.0f), FVector2D(WalkSpeed, RunSpeed), GetPendingMovementInputVector().X)) * DeltaSeconds * GetActorForwardVector();
	FVector OriginalLocation = GetActorLocation();
	FVector DesiredLoc = OriginalLocation + DesiredMovement;
	float MaxYawThisFrame = YawSpeed * DeltaSeconds;
	FRotator DesiredRot = GetActorRotation() + FRotator(0.0f, FMath::Clamp(GetRotationInput(), -MaxYawThisFrame, MaxYawThisFrame), 0.0f);
	
	SetActorLocationAndRotation(DesiredLoc, DesiredRot.Quaternion(), true);
	FVector DistanceWalked = GetActorLocation() - OriginalLocation;
	if (!DistanceWalked.IsNearlyZero())
	{
		ZombieWalk(DeltaSeconds, DistanceWalked);
	}
	
	// See if we have a target and deal with it if we do. Find a target if we don't.
	if (AActor* Target = GetTarget())
	{
		// We do have a target. See if we're attacking, since our attacks always hit.
		FVector OurLocation = GetActorLocation();
		FVector DirectionToTarget = (Target->GetActorLocation() - OurLocation).GetSafeNormal2D();
		float DotToTarget = FVector::DotProduct(DirectionToTarget, GetActorForwardVector());
		
		// Check to see if we should attack based on button status and attack cooldown.
		float CurrentTime = GetWorld()->GetTimeSeconds();
		if (GetAttackInput() && (AttackAvailableTime <= CurrentTime))
		{
			AttackAvailableTime = CurrentTime + AttackCooldown;
			ZombieAttack(DeltaSeconds);
			if (DotToTarget >= FMath::Cos(FMath::DegreesToRadians(AttackAngle)))
			{
				float DistSqXY = FVector::DistSquaredXY(Target->GetActorLocation(), OurLocation);
				if (DistSqXY <= (AttackDistance * AttackDistance))
				{
					if (ATank* TankTarget = GetTargetAsTank())
					{
						//TankTarget->DamageHealth(10.0f);
						if (APlayerController* PC = Cast<APlayerController>(TankTarget->GetController()))
						{
							PC->ClientPlayCameraShake(HitShake, 1.0f);
						}
						else
						{
							SetTarget(nullptr);
						}
					}
				}
			}
		}
	}
}

bool AZombie::ZombieAIShouldAttack_Implementation()
{
	if (AActor* Target = GetTarget())
	{
		// Attack our target if we're in range (distance and angle). For now, we'll use our unmodified at
		FVector OurLocation = GetActorLocation();
		FVector DirectionToTarget = (Target->GetActorLocation() - OurLocation).GetSafeNormal2D();
		float DotToTarget = FVector::DotProduct(DirectionToTarget, GetActorForwardVector());
		if (DotToTarget >= FMath::Cos(FMath::DegreesToRadians(AttackAngle)))
		{
			float DistSqXY = FVector::DistSquaredXY(Target->GetActorLocation(), OurLocation);
			if (DistSqXY <= (AttackDistance * AttackDistance))
			{
				// Note that attacking cooldown isn't checked. We don't want this kind of zombie to move 
			}
		}
	}
}

void AZombie::SetTarget(AActor* NewTarget)
{
	TargetActor = NewTarget;
	TargetBatteryCollectorCharacter = Cast<ABatteryCollectorCharacter>(NewTarget);
}

AActor* AZombie::GetTarget()
{
	return TargetActor;
}

ABatteryCollectorCharacter* AZombie::GetTargetAsBatteryCollectorCharacter()
{
	return TargetBatteryCollectorCharacter;
}

//bool AZombie::ZombieAIShouldAttack()
//{
//}

void AZombie::AddRotationInput(float DeltaYawDegrees)
{
	YawInput += DeltaYawDegrees;
}

float AZombie::GetRotationInput()
{
	return YawInput;
}

float AZombie::ConsumeRotationInput()
{
	float RetVal = YawInput;
	YawInput = 0.0f;
	return RetVal;
}

void AZombie::AddAttackInput()
{
	bAttackInput = true;
}

bool AZombie::GetAttackInput()
{
	return bAttackInput;
}

bool AZombie::ConsumeAttackInput()
{
	bool bRetVal = bAttackInput;
	bAttackInput = false;
	return bRetVal;
}
