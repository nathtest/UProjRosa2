#pragma once
#include "CoreMinimal.h"
#include "G01SeqNotifyBgmPauseParam.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqNotifyBgmPauseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInTime;
    
    RS2RE_API FG01SeqNotifyBgmPauseParam();
};

