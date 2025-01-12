#pragma once
#include "CoreMinimal.h"
#include "SeqCameraLookAtParamBase.h"
#include "SeqCameraLookAtSlotActors.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqCameraLookAtSlotActors : public FSeqCameraLookAtParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MSlotIndices;
    
    FSeqCameraLookAtSlotActors();
};

