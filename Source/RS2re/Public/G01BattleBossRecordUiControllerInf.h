#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01GameDifficultyType.h"
#include "G01BattleEndNotifyData.h"
#include "G01BattlePresetRecordDataStruct.h"
#include "G01BattleBossRecordUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleBossRecordUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleBossRecordUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleBossRecordUiController_UpdateRecord(const FG01BattleEndNotifyData& InBattleResult, FG01BattlePresetRecordDataStruct& RePrevRecord, FG01BattlePresetRecordDataStruct& ReNewRecord, bool& ReIsUpdate, bool& ReIsFirstTime, bool& ReIsFirstEncounters);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleBossRecordUiController_OpenUpdateWindow(const FG01BattlePresetRecordDataStruct& InPrevRecord, const FG01BattlePresetRecordDataStruct& InNewRecord, bool IsFirstTime, FName InBattlePresetId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleBossRecordUiController_OpenRecordWindow(const FName& InBattlePresetId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleBossRecordUiController_GetLastestRecord(int32& ReLastestTurnCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleBossRecordUiController_GetBestRecord(const FName& InBattlePresetId, const EG01GameDifficultyType& InDifficultyType, FG01BattlePresetRecordDataStruct& ReBestRecord, bool& ReIsFound);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleBossRecordUiController_Debug(bool IsCheck, int32 Trun);
    
};

