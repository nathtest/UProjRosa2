#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EAISpeed.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAISpeed -FallbackName=EAISpeed
#include "PlayerManagerAccessCompo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=PlayerManagerAccessCompo -FallbackName=PlayerManagerAccessCompo
#include "EG01GimmickType.h"
#include "G01FieldPlayerVoiceTypeStruct.h"
#include "G01FieldPlayerManagerAccessor.generated.h"

class AActor;
class AGimmickObjectBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01FieldPlayerManagerAccessor : public UPlayerManagerAccessCompo {
    GENERATED_BODY()
public:
    UG01FieldPlayerManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleEnableStealth();
    
    UFUNCTION(BlueprintCallable)
    void StopTurnOnTarget();
    
    UFUNCTION(BlueprintCallable)
    void StartTurnOnTarget(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void StartReadyMove(const FTransform& InTransform, const float InTime);
    
    UFUNCTION(BlueprintCallable)
    void StartPointCameraAtLocation(const float InAlpha);
    
    UFUNCTION(BlueprintCallable)
    void StartForceMove(const float InToleranceDistance, EAISpeed InMoveType, bool InPausedCamera);
    
    UFUNCTION(BlueprintCallable)
    void SetPointCameraAtLocation(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerTransform(const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetForceMoveLocation(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void ResetLoseBattleAnimation();
    
    UFUNCTION(BlueprintCallable)
    void RequestLoseBattleAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoice(const FG01FieldPlayerVoiceTypeStruct& InVoiceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceMove() const;
    
    UFUNCTION(BlueprintCallable)
    void GimmickInteractAction(AGimmickObjectBase* InGimmickObject, EG01GimmickType InGimmickType);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetTurnTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerTransform(FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintCallable)
    void GetLeaveCollisionLocation(FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteGimmickReaction();
    
    UFUNCTION(BlueprintCallable)
    void EnableStealth();
    
    UFUNCTION(BlueprintCallable)
    void DisableStealth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckEnableStealth(bool& OutIsEnableStealth) const;
    
    UFUNCTION(BlueprintCallable)
    void CheckActiveTalkCamera(bool& OutIsActive, AActor*& OutTalkTargetActor);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTalkCamera(const AActor* InTalkTargetActor);
    
    UFUNCTION(BlueprintCallable)
    void CancelTalkCamera();
    
};

