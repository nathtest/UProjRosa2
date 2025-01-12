#pragma once
#include "CoreMinimal.h"
#include "ESoundCategoryID.h"
#include "RegisterArgsCommon.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FRegisterArgsCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundCategoryID MSoundCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> MSoundSoftRef;
    
    GAMEBASESYSTEM_API FRegisterArgsCommon();
};

