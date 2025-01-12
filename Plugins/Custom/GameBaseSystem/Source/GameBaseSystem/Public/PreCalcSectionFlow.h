#pragma once
#include "CoreMinimal.h"
#include "PreCalcDestSectionPattern.h"
#include "PreCalcSectionFlow.generated.h"

USTRUCT(BlueprintType)
struct FPreCalcSectionFlow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPreCalcDestSectionPattern> MBranchListBySection;
    
    GAMEBASESYSTEM_API FPreCalcSectionFlow();
};

