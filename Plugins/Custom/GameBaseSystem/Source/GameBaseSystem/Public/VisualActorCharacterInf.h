#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "EVAEyeControlMode.h"
#include "EVAGazeType.h"
#include "EVALookMode.h"
#include "EVALookType.h"
#include "LookCurveDelegateScriptDelegate.h"
#include "VAFacialParams.h"
#include "VALookParams.h"
#include "VisualActorDynamicMaterialTarget.h"
#include "VisualActorCharacterInf.generated.h"

class AActor;
class UCurveFloat;
class UCurveVector;
class USceneComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UVisualActorCharacterInf : public UInterface {
    GENERATED_BODY()
};

class IVisualActorCharacterInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_VisualActorChara_UpdateFacial(float InDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_UnbindLookCurveStarted(const FLookCurveDelegateScript& InEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_UnbindLookCurveFinished(const FLookCurveDelegateScript& InEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_StopLookCurve();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetWraithForm();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetShadowServant();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetRevive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetPhantomChivalry();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetPetrify();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetMistCover();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetMaterialVectorParameter(const FVisualActorDynamicMaterialTarget& InTarget, const FLinearColor& InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetMaterialScalarParameter(const FVisualActorDynamicMaterialTarget& InTarget, const float& InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetManualEyeOffset(const FVector2D& InEyeOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetLookTypeBlendTime(float InBlendTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetLookTypeBlendCurve(UCurveFloat* InCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetLookTargetComponent(USceneComponent* InLookTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetLookTargetActor(AActor* InLookTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetLookRelativeRotationByVec2D(const FVector2D& InLookRelativeRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetLookRelativeRotation(const FRotator& InLookRelativeRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetLookRelativePosition(const FVector& InLookRelativePosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetLookMode(EVALookMode InLookMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetIsEnableFootIK(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetInitialLookRelativeRotationByVec2D(const FVector2D& InLookRelativeRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetHeadRollAngle(float InAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetGhostTrail(const FVector4& Color, float InInterval, float InLifespan, float InPow, float InMul);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetFootIKMultiplier(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetFacialParams(const FVAFacialParams& InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetEyeOpenR(float InOpenValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetEyeOpenL(float InOpenValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetEyeOpen(float InOpenValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetEyeControlMode(EVAEyeControlMode InControlMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_SetEmissiveRate(float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_ResetCurveRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_PlayLookCurve(UCurveVector* InCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_VisualActorChara_IsPlayingLookCurve();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_VisualActorChara_IsLookTypeBlending();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EVALookType Inf_VisualActorChara_GetNextLookType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_GetMaterialVectorParameter(const FVisualActorDynamicMaterialTarget& InTarget, bool InIsDefault, FLinearColor& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_GetMaterialScalarParameter(const FVisualActorDynamicMaterialTarget& InTarget, bool InIsDefault, float& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector2D Inf_VisualActorChara_GetManualEyeOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_VisualActorChara_GetLookTypeBlendTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EVALookType Inf_VisualActorChara_GetLookType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator Inf_VisualActorChara_GetLookRelativeRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector Inf_VisualActorChara_GetLookRelativePosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector Inf_VisualActorChara_GetLookPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_GetLookParams(FVALookParams& OutLookParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EVALookMode Inf_VisualActorChara_GetLookMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_VisualActorChara_GetIsEnableFootIK();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EVAGazeType Inf_VisualActorChara_GetGazeType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_VisualActorChara_GetFootIKMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_GetFacialParams(FVAFacialParams& OutParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_VisualActorChara_GetEyeOpenR();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_VisualActorChara_GetEyeOpenL();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_VisualActorChara_GetEyeOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EVAEyeControlMode Inf_VisualActorChara_GetEyeControlMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector2D Inf_VisualActorChara_GetCurrentEyeOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_ForceUpdateLookParams();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_CopyLookParams(AActor* InDestVisualActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_ClearWraithForm();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_ClearShadowServant();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_ClearRevive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_ClearPhantomChivalry();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_ClearPetrify();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_ClearMistCoverm();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_ClearGhostTrail();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_ChangeLookType(EVALookType InLookType, bool InIsImmediateUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_BindLookCurveStarted(const FLookCurveDelegateScript& InEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActorChara_BindLookCurveFinished(const FLookCurveDelegateScript& InEvent);
    
};

