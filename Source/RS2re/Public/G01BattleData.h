#pragma once
#include "CoreMinimal.h"
#include "G01BattleCharacterData.h"
#include "G01BattleData.generated.h"

USTRUCT(BlueprintType)
struct FG01BattleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MBattleFieldId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleCharacterData> MPartyDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleCharacterData> MEnemyDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MFomationId;
    
    RS2RE_API FG01BattleData();
};

