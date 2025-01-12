#include "G01ItemAttachComponent.h"

UG01ItemAttachComponent::UG01ItemAttachComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemObject = NULL;
}

void UG01ItemAttachComponent::Visible() {
}

void UG01ItemAttachComponent::SetVASlotNo(int32 InSlotNo) {
}

void UG01ItemAttachComponent::SetDitherRate(bool InDitherUsed, float InRate) {
}

void UG01ItemAttachComponent::RemoveCache() {
}

void UG01ItemAttachComponent::OnItemVACreated(FName InItemID) {
}

void UG01ItemAttachComponent::NewAttach(FName InItemID, FName InKeyName, FName InSocketName, FName InTagName, USceneComponent* InSceneComponent) {
}

void UG01ItemAttachComponent::Invisible() {
}

void UG01ItemAttachComponent::GetItemId(FName& OutItemID) {
}

void UG01ItemAttachComponent::GetItemDataByItemID(FName InItemID, FG01ItemDataStruct& OutData) {
}

AActor* UG01ItemAttachComponent::GetAttachParentActor_Implementation() {
    return NULL;
}


void UG01ItemAttachComponent::Detach() {
}


void UG01ItemAttachComponent::CreateCache(const FG01ItemAttachCacheArg& InCacheArg) {
}

void UG01ItemAttachComponent::Attach(FName InKeyName, FName InSocketName, FName InTagName, USceneComponent* InSceneComponent) {
}


