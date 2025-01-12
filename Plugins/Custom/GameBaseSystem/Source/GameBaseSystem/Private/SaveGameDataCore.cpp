#include "SaveGameDataCore.h"
#include "Templates/SubclassOf.h"

USaveGameDataCore::USaveGameDataCore() {
    this->PlatformType = EPlatformType::PLATFORM_TYPE_UNKNOWN;
    this->bIsTrial = false;
    this->State = ESaveDataState::ReadOnly;
}

bool USaveGameDataCore::IsWritable() const {
    return false;
}

bool USaveGameDataCore::IsTrialData() const {
    return false;
}

bool USaveGameDataCore::IsTempLoad() const {
    return false;
}

int32 USaveGameDataCore::GetUserIndex() const {
    return 0;
}

FSaveDataTypeInfo USaveGameDataCore::GetTypeInfo() const {
    return FSaveDataTypeInfo{};
}

ESaveDataState USaveGameDataCore::GetState() const {
    return ESaveDataState::ReadOnly;
}

EPlatformType USaveGameDataCore::GetSavePlatform() const {
    return EPlatformType::PLATFORM_TYPE_WINDOWS;
}

FSaveDataLoadOptions USaveGameDataCore::GetLoadOptions() const {
    return FSaveDataLoadOptions{};
}

TSubclassOf<USaveGameDataCore> USaveGameDataCore::GetLatestVersionClass() const {
    return NULL;
}

ESaveDataGroup USaveGameDataCore::GetGroup() const {
    return ESaveDataGroup::Game;
}

ESaveSlotCategory USaveGameDataCore::GetCategory() const {
    return ESaveSlotCategory::Auto;
}


