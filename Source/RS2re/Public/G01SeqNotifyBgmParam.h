#pragma once
#include "CoreMinimal.h"
#include "G01BgmRequest.h"
#include "G01SeqNotifyBgmParam.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqNotifyBgmParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BgmRequest MBgmRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsStopWhenFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsPlayMainBgm;
    
    RS2RE_API FG01SeqNotifyBgmParam();
};

