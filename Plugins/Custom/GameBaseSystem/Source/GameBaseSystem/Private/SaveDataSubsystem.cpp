#include "SaveDataSubsystem.h"

USaveDataSubsystem::USaveDataSubsystem() {
    this->Helper = NULL;
    this->State = ESaveDataSubsystemState::Idle;
}

void USaveDataSubsystem::UpdateVersion(USaveGameDataCore*& InOutSaveData) {
}

bool USaveDataSubsystem::UpdateSaveData(const ESaveDataGroup& InGroup) {
    return false;
}

void USaveDataSubsystem::UnlockAutoSaveByObject(const UObject* InObject) {
}

void USaveDataSubsystem::UnlockAutoSaveByKey(FName InKey) {
}

void USaveDataSubsystem::UnloadByObject(USaveGameDataCore* InSaveData) {
}

void USaveDataSubsystem::UnloadByGroup(ESaveDataGroup InGroup, bool InIsTempLoad) {
}

void USaveDataSubsystem::Save(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest, const FSaveDataSaveOptions& InOptions, ESaveDataSyncType InSyncType) {
}

void USaveDataSubsystem::Reset() {
}

void USaveDataSubsystem::Reload(bool& OutIsSuccess, FSaveDataTypeInfo& OutInfo, ESaveDataGroup InGroup, ESaveDataSyncType InSyncType) {
}

void USaveDataSubsystem::ReceiveStartGameInstance(UGameInstance* InGameInstance) {
}

void USaveDataSubsystem::ReceivePostLoadMap(UWorld* InWorld) {
}

void USaveDataSubsystem::LockAutoSaveByObject(const UObject* InObject) {
}

void USaveDataSubsystem::LockAutoSaveByKey(FName InKey) {
}

void USaveDataSubsystem::Load(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest, const FSaveDataLoadOptions& InOptions, ESaveDataSyncType InSyncType) {
}

bool USaveDataSubsystem::IsSaving() const {
    return false;
}

bool USaveDataSubsystem::IsSavable_Implementation() const {
    return false;
}

bool USaveDataSubsystem::IsLoading() const {
    return false;
}

bool USaveDataSubsystem::IsIdle() const {
    return false;
}

bool USaveDataSubsystem::IsEnableAutoSave() const {
    return false;
}

void USaveDataSubsystem::FindTempSaveDataRaw(TArray<USaveGameDataCore*>& OutSaveDataList, ESaveDataGroup InGroup) {
}

USaveGameDataCore* USaveDataSubsystem::FindSaveDataRaw(ESaveDataGroup InGroup) {
    return NULL;
}

bool USaveDataSubsystem::DoesSaveFileExist(const FSaveDataRequestInfo& InRequest) const {
    return false;
}

void USaveDataSubsystem::Delete(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest) {
}

void USaveDataSubsystem::DecompressAll(int32 InUserIndex) {
}

void USaveDataSubsystem::CompressAll(int32 InUserIndex) {
}

void USaveDataSubsystem::CanReload(bool& OutIsReloadable, ESaveDataGroup InGroup) {
}


