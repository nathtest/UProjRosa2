#pragma once
#include "CoreMinimal.h"
#include "G01LipSyncResource.generated.h"

class UCurveLipsync;

USTRUCT(BlueprintType)
struct RS2RE_API FG01LipSyncResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveLipsync* LipSyncCurve;
    
    FG01LipSyncResource();
};

