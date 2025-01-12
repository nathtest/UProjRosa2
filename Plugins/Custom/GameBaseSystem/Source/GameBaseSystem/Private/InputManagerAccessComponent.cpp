#include "InputManagerAccessComponent.h"
#include "EManagerID.h"

UInputManagerAccessComponent::UInputManagerAccessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_INPUT;
}

bool UInputManagerAccessComponent::IsPressingAnyKey(int32 InPlayerControllerIndex) const {
    return false;
}

EPlatformType UInputManagerAccessComponent::GetLastInputPlatform() const {
    return EPlatformType::PLATFORM_TYPE_WINDOWS;
}

void UInputManagerAccessComponent::GetInputStackData(int32 InPlayerControllerIndex, bool& OutIsValid, FInputStackData& OutInputStackData) {
}

EInputGlobalState UInputManagerAccessComponent::GetInputGlobalState() const {
    return EInputGlobalState::Unknown;
}


