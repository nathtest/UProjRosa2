#pragma once
#include "CoreMinimal.h"
#include "EG01MsgSubtitleDisplayType.h"
#include "G01TextFindArgs.h"
#include "G01MsgSubtitleParam.generated.h"

USTRUCT(BlueprintType)
struct FG01MsgSubtitleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MMessageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TextFindArgs TextArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01MsgSubtitleDisplayType DisplayType;
    
    RS2RE_API FG01MsgSubtitleParam();
};

