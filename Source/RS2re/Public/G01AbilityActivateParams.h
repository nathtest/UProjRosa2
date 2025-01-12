#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityActivateType.h"
#include "G01AbilityActivateParams.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityActivateParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01AbilityActivateType ActivateType;
    
    FG01AbilityActivateParams();
};

