#pragma once
#include "CoreMinimal.h"
#include "G01SeqMsgVoiceWaitParam.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqMsgVoiceWaitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimBlendTime;
    
    RS2RE_API FG01SeqMsgVoiceWaitParam();
};

