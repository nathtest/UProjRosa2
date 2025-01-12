#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EG01RecordGenerationType.h"
#include "G01CharacterID.h"
#include "G01EventHistoryRecord.h"
#include "G01EventTriggerID.h"
#include "G01PastEmperorCharacter.h"
#include "G01StoryHistoryID.h"
#include "G01StoryHistoryLotterySettingsID.h"
#include "G01StoryHistoryRecord.h"
#include "G01HistoryManagerAccessor.generated.h"

class AG01HistoryManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01HistoryManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01HistoryManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RecordGeneration(const EG01RecordGenerationType InRecordType, const int32 InGeneration);
    
    UFUNCTION(BlueprintCallable)
    void RecordEventInfo(const FG01EventTriggerID InEventTriggerID);
    
    UFUNCTION(BlueprintCallable)
    void PushStoryID(FG01StoryHistoryID InStoryID);
    
    UFUNCTION(BlueprintCallable)
    void PushPastEmperor(const FG01CharacterID InCharaID);
    
    UFUNCTION(BlueprintCallable)
    void GetStoryHistories(TArray<FG01StoryHistoryRecord>& OutHistories, FG01StoryHistoryLotterySettingsID InLotterySettingsID);
    
    UFUNCTION(BlueprintCallable)
    void GetSortContributePointPastEmperorList(TArray<FG01PastEmperorCharacter>& OutCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void GetPastEmperorCharacterList(TArray<FG01PastEmperorCharacter>& OutCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void GetPastEmperorCharacterIDList(TArray<FG01CharacterID>& OutCharaIDList);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AG01HistoryManager* GetHistoryManager() const;
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetGenerationRecord(const EG01RecordGenerationType InRecordType);
    
    UFUNCTION(BlueprintCallable)
    void GetEventRecordList(TArray<FG01EventHistoryRecord>& OutEventRecordList);
    
    UFUNCTION(BlueprintCallable)
    void GetEventRecord(const FG01EventTriggerID InEventTriggerID, FG01EventHistoryRecord& OutEventRecord, bool InChangeGeneration);
    
    UFUNCTION(BlueprintCallable)
    int32 GetContributePointByCharaID(const FG01CharacterID InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void DBG_ResetEventRecords();
    
    UFUNCTION(BlueprintCallable)
    void DBG_RecordEventInfo(const FG01EventTriggerID& InEventTriggerID, const FG01CharacterID& InCharaID, const int32& InRecordPeriod);
    
    UFUNCTION(BlueprintCallable)
    void DBG_AddContributePoint(const FG01CharacterID InCharaID, const int32 InPoint);
    
    UFUNCTION(BlueprintCallable)
    bool CheckPastEmperorChara(const FG01CharacterID InCharaID);
    
};

