#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "SeqGeneralEventParam.h"
#include "SeqGeneralTriggerRegisterParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqGeneralTriggerRegisterParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqGeneralEventParam Param;
    
    FSeqGeneralTriggerRegisterParam();
};

