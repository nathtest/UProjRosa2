#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01GameDifficultyType.h"
#include "G01BattleEndNotifyData.h"
#include "G01BattlePresetRecordDataStruct.h"
#include "G01BattleBossRecordManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleBossRecordManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleBossRecordManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleBossRecordManager_UpdateRecord(const FG01BattleEndNotifyData& InBattleResult, FG01BattlePresetRecordDataStruct& RePrevRecord, FG01BattlePresetRecordDataStruct& ReNewRecord, bool& ReIsUpdate, bool& ReIsFirstTime, bool& ReIsFirstEncounters);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleBossRecordManager_GetLastestRecord(int32& ReLastestTurnCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleBossRecordManager_GetBestRecord(const FName& InBattlePresetId, const EG01GameDifficultyType& InDifficultyType, FG01BattlePresetRecordDataStruct& ReBestRecord, bool& ReIsFound);
    
};

