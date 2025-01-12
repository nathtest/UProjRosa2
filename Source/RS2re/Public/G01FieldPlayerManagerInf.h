#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EAISpeed.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAISpeed -FallbackName=EAISpeed
#include "EG01GimmickType.h"
#include "G01FieldPlayerVoiceTypeStruct.h"
#include "G01FieldPlayerManagerInf.generated.h"

class AActor;
class AGimmickObjectBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FieldPlayerManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01FieldPlayerManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_ToggleEnableStealth();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_StopTurnOnTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_StartTurnOnTarget(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_StartReadyMove(const FTransform& InTransform, const float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_StartPointCameraAtLocation(const float InAlpha);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_StartForceMove(const float InToleranceDistance, EAISpeed InMoveType, bool InPausedCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_SetPointCameraAtLocation(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_SetPlayerTransform(const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_SetForceMoveLocation(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_ResetLoseBattleAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_RequestLoseBattleAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_PlayVoice(const FG01FieldPlayerVoiceTypeStruct& InVoiceType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01FieldPlayerManager_IsForceMove();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_GimmickInteractAction(AGimmickObjectBase* InGimmickObject, EG01GimmickType InGimmickType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* Inf_G01FieldPlayerManager_GetTurnTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_GetPlayerTransform(FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_GetLeaveCollisionLocation(FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01FieldPlayerManager_GetGimmickMove();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_ExecuteGimmickReaction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_EndPlayerReadyMove();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_EndMoveCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_EndForceMove();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_EnableStealth();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_DisableStealth();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_CheckEnableStealth(bool& OutIsEnableStealth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_CheckActiveTalkCamera(bool& OutIsActive, AActor*& OutTalkTargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_ChangeTalkCamera(const AActor* InTalkTargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerManager_CancelTalkCamera();
    
};

