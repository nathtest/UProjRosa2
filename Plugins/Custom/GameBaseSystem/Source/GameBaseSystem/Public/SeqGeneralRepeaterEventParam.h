#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumberRange -FallbackName=FrameNumberRange
#include "SeqGeneralRepeaterEventParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqGeneralRepeaterEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumberRange Range;
    
    FSeqGeneralRepeaterEventParam();
};

