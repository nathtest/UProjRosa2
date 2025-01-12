#pragma once
#include "CoreMinimal.h"
#include "PreCalcBranchList.h"
#include "PreCalcDestSectionPattern.generated.h"

USTRUCT(BlueprintType)
struct FPreCalcDestSectionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPreCalcBranchList> MBeginSectionPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPreCalcBranchList> MEndSectionPattern;
    
    GAMEBASESYSTEM_API FPreCalcDestSectionPattern();
};

