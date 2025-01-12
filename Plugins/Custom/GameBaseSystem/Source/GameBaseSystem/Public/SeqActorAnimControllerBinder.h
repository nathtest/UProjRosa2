#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EAISpeed.h"
#include "EAIState.h"
#include "EPathMoveState.h"
#include "ESeqActorHijackState.h"
#include "EVAEyeControlMode.h"
#include "EVALookMode.h"
#include "EVALookType.h"
#include "SeqActorAnimBindParam.h"
#include "SeqActorBinder_AiParams.h"
#include "SeqActorBinder_AttachRelativeInfo.h"
#include "SeqActorBinder_FacialParams.h"
#include "SeqActorBinder_HijackSettings.h"
#include "SeqActorBinder_LookParams.h"
#include "SeqActorBinder_MoveParams.h"
#include "SeqActorBinder_PhysicsParams.h"
#include "SeqActorBinder_VAGeneralStringParam.h"
#include "SeqActorBinder_VARelatedObjectParam.h"
#include "SeqActorBinder_VisualParams.h"
#include "SequenceActControllerBinderBase.h"
#include "Templates/SubclassOf.h"
#include "VisualActorOwnerInf.h"
#include "SeqActorAnimControllerBinder.generated.h"

class AActor;
class ACharacterBase;
class ASequenceActorAnimationController;
class AVisualActor;
class UChildActorComponent;
class UCurveFloat;
class UCurveVector;
class UObject;
class USceneComponent;
class USeqActorDefaultLookComponent;
class USequenceSettingDataAsset;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASeqActorAnimControllerBinder : public ASequenceActControllerBinderBase, public IVisualActorOwnerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USequenceSettingDataAsset> SequenceSettingsPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MViewSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UChildActorComponent* MViewVisualActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Interp, meta=(AllowPrivateAccess=true))
    USeqActorDefaultLookComponent* DefaultLookComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASequenceActorAnimationController> MSupportControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSeqActorBinder_HijackSettings MHijackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EVALookMode MLookMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EVALookType MLookType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EVAEyeControlMode EyeControlMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSeqActorBinder_LookParams MLookParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSeqActorBinder_FacialParams MFacialParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EAIState MAIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EPathMoveState MAiPathMoveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EAISpeed MAiMoveID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSeqActorBinder_AiParams MAiParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSeqActorBinder_MoveParams MMoveParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSeqActorBinder_PhysicsParams MPhysicsParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSeqActorBinder_VisualParams VisualParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookComponentOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVisualActor> CustomGenerateVisualActorClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USequenceSettingDataAsset* SequenceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeqActorBinder_AttachRelativeInfo AttachRelativeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESeqActorHijackState HijackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> RelatedObjects;
    
public:
    ASeqActorAnimControllerBinder(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetTargetComponent(USceneComponent* InLookComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetReceivesDecals(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPartialPhysicsAlpha_Skirt(float InAlpha);
    
    UFUNCTION(BlueprintCallable)
    void SetPartialPhysicsAlpha_Cape(float InAlpha);
    
    UFUNCTION(BlueprintCallable)
    void SetMTargetActor(AActor* InLookActor);
    
    UFUNCTION(BlueprintCallable)
    void SetMSurprise_Mouth_02(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMSurprise_Mouth_01(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMSurprise_Eyebrow_01(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMSurprise_Eye_01(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMSad_Mouth_02(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMSad_Mouth_01(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMSad_Eyebrow_01(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMSad_Eye_01(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMRelativeRot(const FVector2D& InRelativeRot);
    
    UFUNCTION(BlueprintCallable)
    void SetMRelativePos(const FVector& InRelativePos);
    
    UFUNCTION(BlueprintCallable)
    void SetMPhysicsAlpha(float InAlpha);
    
    UFUNCTION(BlueprintCallable)
    void SetMPathMovePatternIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetMLookTypeBlendTime(float InBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void SetMLookTypeBlendCurve(UCurveFloat* InCurve);
    
    UFUNCTION(BlueprintCallable)
    void SetMLookType(EVALookType InLookType);
    
    UFUNCTION(BlueprintCallable)
    void SetMLookMode(EVALookMode InLookMode);
    
    UFUNCTION(BlueprintCallable)
    void SetMLaugh_Mouth_02(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMLaugh_Mouth_01(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMLaugh_Eyebrow_01(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMLaugh_Eye_01(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMIsWaitAiMoveFinish(bool InIsWait);
    
    UFUNCTION(BlueprintCallable)
    void SetMIsEnableFootIK(bool InIsEnableFootIK);
    
    UFUNCTION(BlueprintCallable)
    void SetMGaze_Eye_01(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMFootIKMultiplier(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMEyeOpen(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMEnableSaccade(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMEnableAutoBlink(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMCurveAsset(UCurveVector* InCurveAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetManualEyeOffset(const FVector2D& InManualEyeOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetMAnger_Mouth_02(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMAnger_Mouth_01(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMAnger_Eyebrow_01(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMAnger_Eye_01(float InValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHijackState(ESeqActorHijackState InState);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetHeadRollAngle(float InAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeOpenR(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeOpenL(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeControlMode(EVAEyeControlMode InEyeControlMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDitherRate(float InRate);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundsScale(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishLookCurve(AActor* InVisualActor, UCurveVector* InCurveAsset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFinishAiMove(EPathMoveState InMoveState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHijacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEnableOptimization() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacterBase* GetTargetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USequenceSettingDataAsset* GetSequenceSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UChildActorComponent* GetPreviewVisualActorChildComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPreviewVisualActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESeqActorHijackState GetHijackState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSeqActorBinder_HijackSettings GetHijackSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AVisualActor> GetDefaultVisualClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSeqActorAnimBindParam GetBindParam() const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_VisualActorNotifyGeneralString(FSeqActorBinder_VAGeneralStringParam InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_VisualActorRelatedObject(FSeqActorBinder_VARelatedObjectParam InParam);
    

    // Fix for true pure virtual functions not being implemented
};

