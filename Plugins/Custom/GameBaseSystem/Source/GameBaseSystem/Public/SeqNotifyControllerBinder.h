#pragma once
#include "CoreMinimal.h"
#include "ForceFeedbackPlayDynamicParams.h"
#include "ForceFeedbackPlayParams.h"
#include "G01SeqNotifyCameraShakeList.h"
#include "SeqNotifyEditorScreenShotParams.h"
#include "SeqNotifyForceFeedbackParams.h"
#include "SeqNotifySkipPointParams.h"
#include "SequenceActControllerBinderBase.h"
#include "Templates/SubclassOf.h"
#include "SeqNotifyControllerBinder.generated.h"

class ASeqNotifyController;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASeqNotifyControllerBinder : public ASequenceActControllerBinderBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSeqNotifyForceFeedbackParams ForceFeedbackParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASeqNotifyController> MSupportControllerClass;
    
public:
    ASeqNotifyControllerBinder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Cmd_TR_StopCameraShakeAll();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_SkipPoint(FSeqNotifySkipPointParams InParams);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_PlayCameraShake(FG01SeqNotifyCameraShakeList InShakeParamPerCameraCut);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_ExecuteScreenShot(FSeqNotifyEditorScreenShotParams InParams);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_PlayForceFeedbackDynamic(FForceFeedbackPlayDynamicParams InParams);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_PlayForceFeedback(FForceFeedbackPlayParams InParams);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_PlayCameraShake(FG01SeqNotifyCameraShakeList InShakeParamPerCameraCut);
    
};

