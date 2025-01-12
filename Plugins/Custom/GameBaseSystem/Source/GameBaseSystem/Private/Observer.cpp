#include "Observer.h"

UObserver::UObserver() {
}

void UObserver::UnregisterInterface(UObject* InObject, UClass* InInterfaceType) {
}

void UObserver::Unregister(UObject* InObject) {
}

void UObserver::RegisterInterface(UObject* InObject, UClass* InInterfaceType) {
}

void UObserver::Register(UObject* InObject) {
}

void UObserver::GetObserverObject(UClass* InInterfaceType, TArray<UObject*>& OutObjectArray) {
}

void UObserver::DebugGetAllObserverObject(TMap<UClass*, FObserverDebugObjectInfo>& OutInterfaceList) {
}


