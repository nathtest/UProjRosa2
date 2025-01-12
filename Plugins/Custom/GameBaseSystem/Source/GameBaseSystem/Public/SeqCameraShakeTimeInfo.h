#pragma once
#include "CoreMinimal.h"
#include "SeqCameraShakeTimeInfo.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FSeqCameraShakeTimeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraShakeBase* MShakeInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MElapsedTime;
    
    GAMEBASESYSTEM_API FSeqCameraShakeTimeInfo();
};

