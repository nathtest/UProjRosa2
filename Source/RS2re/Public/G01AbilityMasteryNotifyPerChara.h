#pragma once
#include "CoreMinimal.h"
#include "G01AbilityMasteryNotifyPerChara.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityMasteryNotifyPerChara {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AbilityIdList;
    
    FG01AbilityMasteryNotifyPerChara();
};

