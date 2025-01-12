#pragma once
#include "CoreMinimal.h"
#include "EG01MapAspectType.h"
#include "G01MapAspectResult.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01MapAspectResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01MapAspectType MLastMapAspect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01MapAspectType MCurrentMapAspect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MAttackBonusRatio;
    
    FG01MapAspectResult();
};

