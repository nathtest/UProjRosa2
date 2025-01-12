#include "SequenceCameraControllerBinder.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent
#include "SequenceCameraController.h"

ASequenceCameraControllerBinder::ASequenceCameraControllerBinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MSpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
    this->MSupportControllerClass = ASequenceCameraController::StaticClass();
    this->MOverrideCameraActor = NULL;
    this->MOriginalSpringArmComponent = NULL;
    this->MOriginalCameraComponent = NULL;
    this->MCameraController = NULL;
    this->MSpringArmComponent->SetupAttachment(RootComponent);
}

void ASequenceCameraControllerBinder::Cmd_TR_SetTargetSlotIndexList(FSeqActorSlotIndexList InTargetSlotIndexList) {
}

void ASequenceCameraControllerBinder::Cmd_TR_RemoveTargetSlotIndex(int32 InRemoveIndex) {
}

void ASequenceCameraControllerBinder::Cmd_TR_EndSeamlessSwitch(FSeqCameraSwitchEndParam InSwitchEndParam) {
}

void ASequenceCameraControllerBinder::Cmd_TR_BeginSeamlessSwitch(FSeqCameraSwitchBeginParam InSwitchBeginParam) {
}

void ASequenceCameraControllerBinder::Cmd_TR_AddTargetSlotIndex(int32 InAddIndex) {
}

FSeqCameraBindParam ASequenceCameraControllerBinder::Cmd_SQ_GetCameraBindParam() const {
    return FSeqCameraBindParam{};
}

void ASequenceCameraControllerBinder::Cmd_RP_LookAtForSlotActorsCenter(FSeqCameraLookAtSlotActors InParam) {
}

void ASequenceCameraControllerBinder::CalculateCameraOffset_Implementation(const TArray<AActor*>& InTargetActors, const FSeqPlayArguments& InPlayArgs, const FSeqCameraBindParam& InCameraBindParam, float& OutOffsetLength) {
}


