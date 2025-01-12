#pragma once
#include "CoreMinimal.h"
#include "G01DebugLevelTransitionDetailData.h"
#include "G01DebugLevelTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FG01DebugLevelTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01DebugLevelTransitionDetailData> DetailList;
    
    RS2RE_API FG01DebugLevelTransitionData();
};

