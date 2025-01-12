#pragma once
#include "CoreMinimal.h"
#include "EG01GameDifficultyType.h"
#include "G01BattlePresetRecordDataStruct.h"
#include "G01BattleBossRecordDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01BattleBossRecordDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01GameDifficultyType, FG01BattlePresetRecordDataStruct> BattlePresetRecordTable;
    
    RS2RE_API FG01BattleBossRecordDataStruct();
};

