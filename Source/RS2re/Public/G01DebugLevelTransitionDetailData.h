#pragma once
#include "CoreMinimal.h"
#include "G01DebugLevelTransitionDetailData.generated.h"

USTRUCT(BlueprintType)
struct FG01DebugLevelTransitionDetailData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    RS2RE_API FG01DebugLevelTransitionDetailData();
};

