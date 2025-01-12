#pragma once
#include "CoreMinimal.h"
#include "G01VAParamHand.h"
#include "G01VAParamWeaponCustomData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01VAParamWeaponCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAParamHand HandL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAParamHand HandR;
    
    FG01VAParamWeaponCustomData();
};

