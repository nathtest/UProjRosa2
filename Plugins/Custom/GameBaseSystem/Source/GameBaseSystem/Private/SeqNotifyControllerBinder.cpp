#include "SeqNotifyControllerBinder.h"

ASeqNotifyControllerBinder::ASeqNotifyControllerBinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MSupportControllerClass = NULL;
}

void ASeqNotifyControllerBinder::Cmd_TR_StopCameraShakeAll() {
}

void ASeqNotifyControllerBinder::Cmd_TR_SkipPoint(FSeqNotifySkipPointParams InParams) {
}

void ASeqNotifyControllerBinder::Cmd_TR_PlayCameraShake(FG01SeqNotifyCameraShakeList InShakeParamPerCameraCut) {
}

void ASeqNotifyControllerBinder::Cmd_TR_ExecuteScreenShot(FSeqNotifyEditorScreenShotParams InParams) {
}

void ASeqNotifyControllerBinder::Cmd_RP_PlayForceFeedbackDynamic(FForceFeedbackPlayDynamicParams InParams) {
}

void ASeqNotifyControllerBinder::Cmd_RP_PlayForceFeedback(FForceFeedbackPlayParams InParams) {
}

void ASeqNotifyControllerBinder::Cmd_RP_PlayCameraShake(FG01SeqNotifyCameraShakeList InShakeParamPerCameraCut) {
}


