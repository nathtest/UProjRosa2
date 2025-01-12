#pragma once
#include "CoreMinimal.h"
#include "G01BgmLogStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01BgmLogStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BgmName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsListenedEvenOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListenCount;
    
    RS2RE_API FG01BgmLogStruct();
};

