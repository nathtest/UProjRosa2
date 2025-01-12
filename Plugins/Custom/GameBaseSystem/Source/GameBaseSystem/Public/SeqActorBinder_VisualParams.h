#pragma once
#include "CoreMinimal.h"
#include "SeqActorBinder_VisualParams.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqActorBinder_VisualParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DitherRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundsScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReceivesDecals;
    
    FSeqActorBinder_VisualParams();
};

