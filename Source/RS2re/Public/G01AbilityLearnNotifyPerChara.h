#pragma once
#include "CoreMinimal.h"
#include "G01AbilityLearnNotifyPerChara.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityLearnNotifyPerChara {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AbilityIdList;
    
    FG01AbilityLearnNotifyPerChara();
};

