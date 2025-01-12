#include "G01UiDioramaComponent.h"

UG01UiDioramaComponent::UG01UiDioramaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Diorama = NULL;
}

void UG01UiDioramaComponent::SpawnDiorama(const FTransform& InSpawnTransform) {
}

void UG01UiDioramaComponent::Open(TArray<FName> InParameterList) {
}

void UG01UiDioramaComponent::IsDioramaExist(bool& ReIsExist) {
}

void UG01UiDioramaComponent::GetValueByKey(FName InKey, float& ReValue) {
}

void UG01UiDioramaComponent::GetObjectInDiorama(const FName InObjectName, USceneComponent*& ReObject) {
}

void UG01UiDioramaComponent::DestoryDiorama() {
}

void UG01UiDioramaComponent::CommandVoice(const TArray<FName>& InCommandNameList) {
}

void UG01UiDioramaComponent::CommandDiorama(const FName InCommandName, const TArray<float>& InValue) {
}

void UG01UiDioramaComponent::CommandCharacter(const FName InCommandName, const AVisualActor* InVisualActor, const UObject* InAnimation, const TArray<float>& InValue) {
}

void UG01UiDioramaComponent::CommandCamera(FName InCommandName, const TArray<float>& InValue) {
}

void UG01UiDioramaComponent::Close() {
}


