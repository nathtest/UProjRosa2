#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01RecordGenerationType.h"
#include "G01CharacterID.h"
#include "G01EventHistoryRecord.h"
#include "G01EventTriggerID.h"
#include "G01PastEmperorCharacter.h"
#include "G01StoryHistoryID.h"
#include "G01StoryHistoryLotterySettingsID.h"
#include "G01StoryHistoryRecord.h"
#include "G01HistoryManagerInterface.generated.h"

UINTERFACE(Blueprintable)
class UG01HistoryManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01HistoryManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HistoryManager_RecordGeneration(const EG01RecordGenerationType& InRecordType, const int32& InGeneration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HistoryManager_RecordEventInfo(const FG01EventTriggerID& InEventTriggerID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HistoryManager_PushStoryID(const FG01StoryHistoryID& InStoryID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HistoryManager_PushPastEmperor(const FG01CharacterID& InCharaID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HistoryManager_GetStoryHistories(TArray<FG01StoryHistoryRecord>& OutHistories, const FG01StoryHistoryLotterySettingsID& InLotterySettingsID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HistoryManager_GetSortContributePointPastEmperorList(TArray<FG01PastEmperorCharacter>& OutCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HistoryManager_GetPastEmperorCharacterList(TArray<FG01PastEmperorCharacter>& OutCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HistoryManager_GetPastEmperorCharacterIDList(TArray<FG01CharacterID>& OutCharaIDList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01HistoryManager_GetGenerationRecord(const EG01RecordGenerationType& InRecordType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HistoryManager_GetEventRecordList(TArray<FG01EventHistoryRecord>& OutHistoryList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HistoryManager_GetEventRecord(const FG01EventTriggerID& InEventTriggerID, FG01EventHistoryRecord& OutEventRecord, bool& InChangeGeneration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01HistoryManager_GetContributePointByCharaID(const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HistoryManager_DBG_ResetEventRecords();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HistoryManager_DBG_RecordEventInfo(const FG01EventTriggerID& InEventTriggerID, const FG01CharacterID& InCharaID, const int32& InRecordPeriod);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HistoryManager_DBG_AddContributePoint(const FG01CharacterID& InCharacterId, const int32& InPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01HistoryManager_CheckPastEmperorChara(const FG01CharacterID& InCharaID);
    
};

