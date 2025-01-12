#include "SaveDataManagerAccessor.h"
#include "EManagerID.h"

USaveDataManagerAccessor::USaveDataManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_SAVEDATA;
}

void USaveDataManagerAccessor::UpdateVersion(USaveGameDataCore*& InOutSaveData) {
}

void USaveDataManagerAccessor::Update(bool& OutIsSuccess, ESaveDataGroup InGroup) {
}

void USaveDataManagerAccessor::UnlockAutoSaveByObject(const UObject* InObject) {
}

void USaveDataManagerAccessor::UnlockAutoSaveByKey(FName InKey) {
}

void USaveDataManagerAccessor::UnloadSaveDataByObject(USaveGameDataCore* InSaveData) {
}

void USaveDataManagerAccessor::UnloadSaveDataByGroup(ESaveDataGroup InGroup) {
}

void USaveDataManagerAccessor::TempLoad(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest, ESaveDataSyncType InSyncType) {
}

void USaveDataManagerAccessor::Reload(bool& OutIsSuccess, FSaveDataTypeInfo& OutInfo, ESaveDataGroup InGroup, ESaveDataSyncType InSyncType) {
}

void USaveDataManagerAccessor::LockAutoSaveByObject(const UObject* InObject) {
}

void USaveDataManagerAccessor::LockAutoSaveByKey(FName InKey) {
}

void USaveDataManagerAccessor::IsSaving(bool& OutIsSaving) {
}

void USaveDataManagerAccessor::IsLoading(bool& OutIsLoading) {
}

void USaveDataManagerAccessor::IsIdle(bool& OutIsIdle) {
}

bool USaveDataManagerAccessor::IsEnableAutoSave() const {
    return false;
}

void USaveDataManagerAccessor::GetState(ESaveDataManagerState& OutState) {
}

void USaveDataManagerAccessor::FindTempSaveData(bool& OutIsValid, TArray<USaveGameDataCore*>& OutSaveDataList, ESaveDataGroup InGroup) {
}

void USaveDataManagerAccessor::FindSaveData(bool& OutIsValid, USaveGameDataCore*& OutSaveData, ESaveDataGroup InGroup) {
}

void USaveDataManagerAccessor::ExecuteAutoSave(bool& OutIsSuccess, FSaveDataSaveOptions InOptions, ESaveDataSyncType InSyncType) {
}

void USaveDataManagerAccessor::Delete(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest) {
}

void USaveDataManagerAccessor::CheckState(bool& OutIsConsistent, ESaveDataManagerState InCheckState) {
}


