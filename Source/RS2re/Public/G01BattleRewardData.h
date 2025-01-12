#pragma once
#include "CoreMinimal.h"
#include "G01BattleRewardData.generated.h"

USTRUCT(BlueprintType)
struct FG01BattleRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> ItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IncreaseItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Crown;
    
    RS2RE_API FG01BattleRewardData();
};

