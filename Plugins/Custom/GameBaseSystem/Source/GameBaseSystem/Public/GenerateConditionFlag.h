#pragma once
#include "CoreMinimal.h"
#include "EGenConditonCheckType.h"
#include "FlagAccessParam.h"
#include "FlagIDListViewStruct.h"
#include "GenerateConditionFlag.generated.h"

USTRUCT(BlueprintType)
struct FGenerateConditionFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGenConditonCheckType MCheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct MConditionFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagAccessParam MFlagAccessParam;
    
    GAMEBASESYSTEM_API FGenerateConditionFlag();
};

