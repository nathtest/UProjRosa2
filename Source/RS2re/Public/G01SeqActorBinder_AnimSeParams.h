#pragma once
#include "CoreMinimal.h"
#include "G01SeqActorBinder_AnimSeParams.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SeqActorBinder_AnimSeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float InnerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AudibleRange;
    
    FG01SeqActorBinder_AnimSeParams();
};

