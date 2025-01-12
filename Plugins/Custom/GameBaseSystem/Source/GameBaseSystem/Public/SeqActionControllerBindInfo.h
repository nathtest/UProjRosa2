#pragma once
#include "CoreMinimal.h"
#include "SeqActionControllerBindInfo.generated.h"

class ASequenceActControllerBinderBase;
class ASequenceActionControllerBase;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqActionControllerBindInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASequenceActControllerBinderBase*> MBinders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASequenceActionControllerBase* MActionController;
    
    FSeqActionControllerBindInfo();
};

