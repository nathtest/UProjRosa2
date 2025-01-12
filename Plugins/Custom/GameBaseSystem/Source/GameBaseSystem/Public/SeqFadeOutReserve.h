#pragma once
#include "CoreMinimal.h"
#include "SeqFadeParam.h"
#include "SeqFadeOutReserve.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqFadeOutReserve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FadeOutFrameCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeqFadeParam FadeParam;
    
    FSeqFadeOutReserve();
};

