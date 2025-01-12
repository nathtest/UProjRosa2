#pragma once
#include "CoreMinimal.h"
#include "SequencerPlayEventResult.generated.h"

USTRUCT(BlueprintType)
struct FSequencerPlayEventResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastChoiceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ChoiceIndexResults;
    
    GAMEBASESYSTEM_API FSequencerPlayEventResult();
};

