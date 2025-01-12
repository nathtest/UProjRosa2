#pragma once
#include "CoreMinimal.h"
#include "G01QStackUpdateAbilityOpenLevelParam.generated.h"

USTRUCT(BlueprintType)
struct FG01QStackUpdateAbilityOpenLevelParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OpenLevel;
    
    RS2RE_API FG01QStackUpdateAbilityOpenLevelParam();
};

