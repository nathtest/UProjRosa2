#include "G01FieldPlayerCharacterBase.h"
#include "G01VoiceManagerAccessor.h"

AG01FieldPlayerCharacterBase::AG01FieldPlayerCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MAnimBPClass = NULL;
    this->MEnableReEncountTime = 0.00f;
    this->MDashType = EG01PlayerDashType::Auto;
    this->EnableDitherStartLength = 350.00f;
    this->EnableDitherEndLength = 50.00f;
    this->IsEnableDither = true;
    this->TurnTarget = NULL;
    this->MCurrentDitherRate = 1.00f;
    this->InteractAnimMontage = NULL;
    this->FieldAttackAnimMontage = NULL;
    this->LadderType = EG01LadderType::None;
    this->ActionType = EG01PlayerActionType::Normal;
    this->WalkNoise = 0.00f;
    this->RunNoise = 0.00f;
    this->DashNoise = 500.00f;
    this->IsEnableVoiceData = false;
    this->FieldVoiceInfoTable = NULL;
    this->VoiceManagerAccessor = CreateDefaultSubobject<UG01VoiceManagerAccessor>(TEXT("VoiceManagerAccessor"));
}

void AG01FieldPlayerCharacterBase::SetRotationRate(FRotator InRotationRate) {
}

void AG01FieldPlayerCharacterBase::SetPlayerRigCorrectionType(EPlayerRigCorrectionType InType) {
}

void AG01FieldPlayerCharacterBase::SetEnableDither(bool InIsEnable) {
}



void AG01FieldPlayerCharacterBase::RequestInteraction() {
}

void AG01FieldPlayerCharacterBase::PlayVoice(const FG01FieldPlayerVoiceTypeStruct InVoiceType) {
}



void AG01FieldPlayerCharacterBase::OnInitCharacter() {
}

void AG01FieldPlayerCharacterBase::OnCompleteReadyMove() {
}

void AG01FieldPlayerCharacterBase::OnCompleteLoadVoiceData(const FG01VoiceLoadInfo& InVoiceLoadInfo) {
}

void AG01FieldPlayerCharacterBase::OnCompleteForceRotateCamera() {
}

void AG01FieldPlayerCharacterBase::OnCompleteForceMove() {
}

bool AG01FieldPlayerCharacterBase::IsInteractionAvailable() {
    return false;
}

bool AG01FieldPlayerCharacterBase::IsFieldAttackAvailable() {
    return false;
}



FRotator AG01FieldPlayerCharacterBase::GetRotationRate() {
    return FRotator{};
}

EPlayerRigCorrectionType AG01FieldPlayerCharacterBase::GetPlayerRigCorrectionType() const {
    return EPlayerRigCorrectionType::NONE;
}


FVector AG01FieldPlayerCharacterBase::GetForceMoveLocation(float InToleranceDistance, TArray<FVector> InPathList) {
    return FVector{};
}

FRotator AG01FieldPlayerCharacterBase::GetDefaultRotationRate() {
    return FRotator{};
}


void AG01FieldPlayerCharacterBase::ExecuteFieldAttackEncount(AActor* InAttackTarget, const FInteractColliderTag& InAttackTargetTag) {
}

void AG01FieldPlayerCharacterBase::EnableInteract() {
}

void AG01FieldPlayerCharacterBase::DisableInteract() {
}

void AG01FieldPlayerCharacterBase::DebugLeaveParty() {
}

void AG01FieldPlayerCharacterBase::DebugJoinParty() {
}

void AG01FieldPlayerCharacterBase::CreateNoise(float InAnimWalkSpeed, float InAnimRunSpeed, float InAnimDashSpeed) {
}





