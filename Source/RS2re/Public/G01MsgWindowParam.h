#pragma once
#include "CoreMinimal.h"
#include "G01TextFindArgs.h"
#include "G01MsgWindowParam.generated.h"

USTRUCT(BlueprintType)
struct FG01MsgWindowParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MMessageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TextFindArgs TextArgs;
    
    RS2RE_API FG01MsgWindowParam();
};

