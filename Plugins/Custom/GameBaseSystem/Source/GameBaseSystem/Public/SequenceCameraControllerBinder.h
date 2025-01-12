#pragma once
#include "CoreMinimal.h"
#include "CamBindParam_Distance.h"
#include "CamBindParam_LookAt.h"
#include "SeqActorSlotIndexList.h"
#include "SeqCameraBindParam.h"
#include "SeqCameraLookAtSlotActors.h"
#include "SeqCameraSwitchBeginParam.h"
#include "SeqCameraSwitchEndParam.h"
#include "SeqPlayArguments.h"
#include "SequenceActControllerBinderBase.h"
#include "Templates/SubclassOf.h"
#include "SequenceCameraControllerBinder.generated.h"

class AActor;
class ACameraActorBase;
class ASequenceCameraController;
class UCameraComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceCameraControllerBinder : public ASequenceActControllerBinderBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* MSpringArmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASequenceCameraController> MSupportControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSeqCameraBindParam MCameraBindParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCamBindParam_Distance MParamDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCamBindParam_LookAt MParamLookAt;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActorBase* MOverrideCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* MOriginalSpringArmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* MOriginalCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASequenceCameraController* MCameraController;
    
public:
    ASequenceCameraControllerBinder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Cmd_TR_SetTargetSlotIndexList(FSeqActorSlotIndexList InTargetSlotIndexList);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_RemoveTargetSlotIndex(int32 InRemoveIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_EndSeamlessSwitch(FSeqCameraSwitchEndParam InSwitchEndParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_BeginSeamlessSwitch(FSeqCameraSwitchBeginParam InSwitchBeginParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_AddTargetSlotIndex(int32 InAddIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSeqCameraBindParam Cmd_SQ_GetCameraBindParam() const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_LookAtForSlotActorsCenter(FSeqCameraLookAtSlotActors InParam);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CalculateCameraOffset(const TArray<AActor*>& InTargetActors, const FSeqPlayArguments& InPlayArgs, const FSeqCameraBindParam& InCameraBindParam, float& OutOffsetLength);
    
};

