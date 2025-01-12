#include "G01HistoryManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01HistoryManagerAccessor::UG01HistoryManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_HISTORY;
}

void UG01HistoryManagerAccessor::RecordGeneration(const EG01RecordGenerationType InRecordType, const int32 InGeneration) {
}

void UG01HistoryManagerAccessor::RecordEventInfo(const FG01EventTriggerID InEventTriggerID) {
}

void UG01HistoryManagerAccessor::PushStoryID(FG01StoryHistoryID InStoryID) {
}

void UG01HistoryManagerAccessor::PushPastEmperor(const FG01CharacterID InCharaID) {
}

void UG01HistoryManagerAccessor::GetStoryHistories(TArray<FG01StoryHistoryRecord>& OutHistories, FG01StoryHistoryLotterySettingsID InLotterySettingsID) {
}

void UG01HistoryManagerAccessor::GetSortContributePointPastEmperorList(TArray<FG01PastEmperorCharacter>& OutCharacterList) {
}

void UG01HistoryManagerAccessor::GetPastEmperorCharacterList(TArray<FG01PastEmperorCharacter>& OutCharacterList) {
}

void UG01HistoryManagerAccessor::GetPastEmperorCharacterIDList(TArray<FG01CharacterID>& OutCharaIDList) {
}

AG01HistoryManager* UG01HistoryManagerAccessor::GetHistoryManager() const {
    return NULL;
}

int32 UG01HistoryManagerAccessor::GetGenerationRecord(const EG01RecordGenerationType InRecordType) {
    return 0;
}

void UG01HistoryManagerAccessor::GetEventRecordList(TArray<FG01EventHistoryRecord>& OutEventRecordList) {
}

void UG01HistoryManagerAccessor::GetEventRecord(const FG01EventTriggerID InEventTriggerID, FG01EventHistoryRecord& OutEventRecord, bool InChangeGeneration) {
}

int32 UG01HistoryManagerAccessor::GetContributePointByCharaID(const FG01CharacterID InCharacterId) {
    return 0;
}

void UG01HistoryManagerAccessor::DBG_ResetEventRecords() {
}

void UG01HistoryManagerAccessor::DBG_RecordEventInfo(const FG01EventTriggerID& InEventTriggerID, const FG01CharacterID& InCharaID, const int32& InRecordPeriod) {
}

void UG01HistoryManagerAccessor::DBG_AddContributePoint(const FG01CharacterID InCharaID, const int32 InPoint) {
}

bool UG01HistoryManagerAccessor::CheckPastEmperorChara(const FG01CharacterID InCharaID) {
    return false;
}


