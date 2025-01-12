#include "G01SaveDataManagerAccessor.h"

UG01SaveDataManagerAccessor::UG01SaveDataManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UG01SaveDataManagerAccessor::TryExecuteAutoSave(bool& OutIsExecute, bool& OutIsSuccess) {
}

void UG01SaveDataManagerAccessor::Save(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest, FG01SaveDataSaveOptions InOptions, ESaveDataSyncType InSyncType) {
}

void UG01SaveDataManagerAccessor::ReserveAutoSave(bool InIsForce) {
}

void UG01SaveDataManagerAccessor::Load(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest, FG01SaveDataLoadOptions InOptions, ESaveDataSyncType InSyncType) {
}

bool UG01SaveDataManagerAccessor::IsTransitionFromSaveRestoreLevel() const {
    return false;
}


