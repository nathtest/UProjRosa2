#include "CharacterVisualActor.h"
#include "LookTargetPositionComponent.h"

ACharacterVisualActor::ACharacterVisualActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MIsDisplayLookVector = false;
    this->MIsAutoSetLookPosSocket = true;
    this->MLookTargetPosition = CreateDefaultSubobject<ULookTargetPositionComponent>(TEXT("LookTargetPosition"));
    this->MModularRoot = NULL;
    this->MLookCurveElapsedTime = 0.00f;
    this->MLookTargetPosition->SetupAttachment(RootComponent);
}

void ACharacterVisualActor::SetVectorValueToMaterial(int32 SlotNo, FName InParamName, FLinearColor InValue) {
}

void ACharacterVisualActor::SetupDyamicMaterial() {
}

void ACharacterVisualActor::SetGhostTrail_Implementation(const FVector4& Color, float InInterval, float InLifespan, float InPow, float InMul) {
}

void ACharacterVisualActor::SetEmissiveRateToAllMaterial(float InEmissiveRate) {
}

void ACharacterVisualActor::SetEmissiveRate_Implementation(float InRate) {
}

void ACharacterVisualActor::SetDitherRate_Implementation(float InRate) {
}

void ACharacterVisualActor::SetDisintegration_Implementation() {
}

bool ACharacterVisualActor::IsBlendingLookType() const {
    return false;
}

bool ACharacterVisualActor::HasModularRoot() const {
    return false;
}

FTransform ACharacterVisualActor::GetRootMeshTransform() const {
    return FTransform{};
}

EVALookMode ACharacterVisualActor::GetLookMode(bool& OutIsAuto) const {
    return EVALookMode::Auto;
}

EVAGazeType ACharacterVisualActor::GetGazeType() const {
    return EVAGazeType::Type1;
}

void ACharacterVisualActor::ClearGhostTrail_Implementation() {
}


