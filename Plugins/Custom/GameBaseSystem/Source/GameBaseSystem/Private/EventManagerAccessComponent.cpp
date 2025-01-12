#include "EventManagerAccessComponent.h"
#include "EManagerID.h"

UEventManagerAccessComponent::UEventManagerAccessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_EVENT;
}

void UEventManagerAccessComponent::GetAllActiveEventsBySingleList(TArray<AEventObjectBase*>& OutAllEvents) {
}

TMap<FEventCategory, FEventObjectList> UEventManagerAccessComponent::GetAllActiveEvent() {
    return TMap<FEventCategory, FEventObjectList>();
}

AEventObjectBase* UEventManagerAccessComponent::CreateEventByClass(TSoftClassPtr<AEventObjectBase> InEventSoftClass, const FEventArguments& InArgs, UObject* InRequester) {
    return NULL;
}

AEventObjectBase* UEventManagerAccessComponent::CreateEvent(FName InEventID, const FEventArguments& InArgs, UObject* InRequester) {
    return NULL;
}

TSoftClassPtr<AEventObjectBase> UEventManagerAccessComponent::ConvertEventIDtoSoftClass(FName InEventID) {
    return NULL;
}

bool UEventManagerAccessComponent::CheckEventPlaying() {
    return false;
}


