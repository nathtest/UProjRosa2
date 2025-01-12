#pragma once
#include "CoreMinimal.h"
#include "G01MsgSimpleParamArray.h"
#include "G01MsgSimpleParamInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FG01MsgSimpleParamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MsgSimpleParamArray MSimpleParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MCurrentParamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MElapsedTime;
    
    RS2RE_API FG01MsgSimpleParamInfo();
};

