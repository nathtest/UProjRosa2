#pragma once
#include "CoreMinimal.h"
#include "G01LipAnimData.generated.h"

class UCurveLipsync;

USTRUCT(BlueprintType)
struct RS2RE_API FG01LipAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveLipsync> CurveAsset;
    
    FG01LipAnimData();
};

