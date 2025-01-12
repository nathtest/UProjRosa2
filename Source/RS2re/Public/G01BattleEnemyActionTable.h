#pragma once
#include "CoreMinimal.h"
#include "G01BattleEnemyActionTable.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEnemyActionTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ArtsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WeightList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PriorityIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaskId;
    
    FG01BattleEnemyActionTable();
};

