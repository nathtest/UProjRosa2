#pragma once
#include "CoreMinimal.h"
#include "PreCalcBranchList.generated.h"

USTRUCT(BlueprintType)
struct FPreCalcBranchList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> MBranches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MFlowIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MDestSectionIndex;
    
    GAMEBASESYSTEM_API FPreCalcBranchList();
};

