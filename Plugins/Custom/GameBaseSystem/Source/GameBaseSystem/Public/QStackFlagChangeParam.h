#pragma once
#include "CoreMinimal.h"
#include "FlagIDListViewStruct.h"
#include "QStackFlagChangeParam.generated.h"

USTRUCT(BlueprintType)
struct FQStackFlagChangeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct FlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSetValue;
    
    GAMEBASESYSTEM_API FQStackFlagChangeParam();
};

