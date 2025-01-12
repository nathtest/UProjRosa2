#pragma once
#include "CoreMinimal.h"
#include "G01SeqNotifyVAAnimSeParams.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqNotifyVAAnimSeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float InnerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AudibleRange;
    
    RS2RE_API FG01SeqNotifyVAAnimSeParams();
};

