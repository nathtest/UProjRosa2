#include "WindCommonSettings.h"
#include "WindDirectionalSourceActor.h"

UWindCommonSettings::UWindCommonSettings() {
    this->WindDirectionalSourceClass = AWindDirectionalSourceActor::StaticClass();
}

bool UWindCommonSettings::IsSwitchableActor(AActor* InActor) const {
    return false;
}

UClass* UWindCommonSettings::GetWindSourceClass() const {
    return NULL;
}


