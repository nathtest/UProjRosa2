#pragma once
#include "CoreMinimal.h"
#include "G01BattleArtsHistory.generated.h"

USTRUCT(BlueprintType)
struct FG01BattleArtsHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ArtsIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ArtsIdCapacity;
    
    RS2RE_API FG01BattleArtsHistory();
};

