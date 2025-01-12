#pragma once
#include "CoreMinimal.h"
#include "ForceFeedbackPlayingData.h"
#include "ForceFeedbackPlayingDataArray.generated.h"

USTRUCT(BlueprintType)
struct FForceFeedbackPlayingDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FForceFeedbackPlayingData> Array;
    
    GAMEBASESYSTEM_API FForceFeedbackPlayingDataArray();
};

