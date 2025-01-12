#include "SeqActorAnimControllerBinder.h"
#include "SeqActorBinderRootComponent.h"
#include "SeqActorDefaultLookComponent.h"
#include "Templates/SubclassOf.h"

ASeqActorAnimControllerBinder::ASeqActorAnimControllerBinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USeqActorBinderRootComponent>(TEXT("RootComponent"));
    this->MViewSkeletalMeshComponent = NULL;
    this->MViewVisualActor = NULL;
    this->DefaultLookComponent = CreateDefaultSubobject<USeqActorDefaultLookComponent>(TEXT("DefaultLookComponent"));
    this->MSupportControllerClass = NULL;
    this->MLookMode = EVALookMode::RelativeRotation;
    this->MLookType = EVALookType::None;
    this->EyeControlMode = EVAEyeControlMode::Auto;
    this->MAIState = EAIState::AI_PATH_MOVE;
    this->MAiPathMoveState = EPathMoveState::AI_PATH_MOVE_ONCE;
    this->MAiMoveID = EAISpeed::AI_SPEED_WALK;
    this->SequenceSettings = NULL;
    this->MTargetActor = NULL;
    this->HijackState = ESeqActorHijackState::NotHijack;
    this->DefaultLookComponent->SetupAttachment(RootComponent);
}

void ASeqActorAnimControllerBinder::SetTargetComponent(USceneComponent* InLookComponent) {
}

void ASeqActorAnimControllerBinder::SetReceivesDecals(bool InValue) {
}

void ASeqActorAnimControllerBinder::SetPartialPhysicsAlpha_Skirt(float InAlpha) {
}

void ASeqActorAnimControllerBinder::SetPartialPhysicsAlpha_Cape(float InAlpha) {
}

void ASeqActorAnimControllerBinder::SetMTargetActor(AActor* InLookActor) {
}

void ASeqActorAnimControllerBinder::SetMSurprise_Mouth_02(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMSurprise_Mouth_01(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMSurprise_Eyebrow_01(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMSurprise_Eye_01(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMSad_Mouth_02(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMSad_Mouth_01(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMSad_Eyebrow_01(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMSad_Eye_01(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMRelativeRot(const FVector2D& InRelativeRot) {
}

void ASeqActorAnimControllerBinder::SetMRelativePos(const FVector& InRelativePos) {
}

void ASeqActorAnimControllerBinder::SetMPhysicsAlpha(float InAlpha) {
}

void ASeqActorAnimControllerBinder::SetMPathMovePatternIndex(int32 InIndex) {
}

void ASeqActorAnimControllerBinder::SetMLookTypeBlendTime(float InBlendTime) {
}

void ASeqActorAnimControllerBinder::SetMLookTypeBlendCurve(UCurveFloat* InCurve) {
}

void ASeqActorAnimControllerBinder::SetMLookType(EVALookType InLookType) {
}

void ASeqActorAnimControllerBinder::SetMLookMode(EVALookMode InLookMode) {
}

void ASeqActorAnimControllerBinder::SetMLaugh_Mouth_02(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMLaugh_Mouth_01(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMLaugh_Eyebrow_01(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMLaugh_Eye_01(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMIsWaitAiMoveFinish(bool InIsWait) {
}

void ASeqActorAnimControllerBinder::SetMIsEnableFootIK(bool InIsEnableFootIK) {
}

void ASeqActorAnimControllerBinder::SetMGaze_Eye_01(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMFootIKMultiplier(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMEyeOpen(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMEnableSaccade(bool InValue) {
}

void ASeqActorAnimControllerBinder::SetMEnableAutoBlink(bool InValue) {
}

void ASeqActorAnimControllerBinder::SetMCurveAsset(UCurveVector* InCurveAsset) {
}

void ASeqActorAnimControllerBinder::SetManualEyeOffset(const FVector2D& InManualEyeOffset) {
}

void ASeqActorAnimControllerBinder::SetMAnger_Mouth_02(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMAnger_Mouth_01(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMAnger_Eyebrow_01(float InValue) {
}

void ASeqActorAnimControllerBinder::SetMAnger_Eye_01(float InValue) {
}

void ASeqActorAnimControllerBinder::SetHijackState(ESeqActorHijackState InState) {
}

void ASeqActorAnimControllerBinder::SetHeadRollAngle(float InAngle) {
}

void ASeqActorAnimControllerBinder::SetEyeOpenR(float InValue) {
}

void ASeqActorAnimControllerBinder::SetEyeOpenL(float InValue) {
}

void ASeqActorAnimControllerBinder::SetEyeControlMode(EVAEyeControlMode InEyeControlMode) {
}

void ASeqActorAnimControllerBinder::SetDitherRate(float InRate) {
}

void ASeqActorAnimControllerBinder::SetBoundsScale(float InValue) {
}

void ASeqActorAnimControllerBinder::OnFinishLookCurve(AActor* InVisualActor, UCurveVector* InCurveAsset) {
}

void ASeqActorAnimControllerBinder::OnFinishAiMove(EPathMoveState InMoveState) {
}

bool ASeqActorAnimControllerBinder::IsHijacking() const {
    return false;
}

bool ASeqActorAnimControllerBinder::IsEnableOptimization_Implementation() const {
    return false;
}

bool ASeqActorAnimControllerBinder::HasTargetActor() const {
    return false;
}

ACharacterBase* ASeqActorAnimControllerBinder::GetTargetCharacter() const {
    return NULL;
}

AActor* ASeqActorAnimControllerBinder::GetTargetActor() const {
    return NULL;
}

USequenceSettingDataAsset* ASeqActorAnimControllerBinder::GetSequenceSettings() const {
    return NULL;
}

UChildActorComponent* ASeqActorAnimControllerBinder::GetPreviewVisualActorChildComponent() const {
    return NULL;
}

AActor* ASeqActorAnimControllerBinder::GetPreviewVisualActor() const {
    return NULL;
}

ESeqActorHijackState ASeqActorAnimControllerBinder::GetHijackState() const {
    return ESeqActorHijackState::NotHijack;
}

FSeqActorBinder_HijackSettings ASeqActorAnimControllerBinder::GetHijackSettings() const {
    return FSeqActorBinder_HijackSettings{};
}

TSubclassOf<AVisualActor> ASeqActorAnimControllerBinder::GetDefaultVisualClass() const {
    return NULL;
}

FSeqActorAnimBindParam ASeqActorAnimControllerBinder::GetBindParam() const {
    return FSeqActorAnimBindParam{};
}

void ASeqActorAnimControllerBinder::Cmd_TR_VisualActorNotifyGeneralString(FSeqActorBinder_VAGeneralStringParam InParam) {
}

void ASeqActorAnimControllerBinder::Cmd_RP_VisualActorRelatedObject(FSeqActorBinder_VARelatedObjectParam InParam) {
}


