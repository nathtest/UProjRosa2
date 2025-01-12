#pragma once
#include "CoreMinimal.h"
#include "SeqLoadingControllerParam.h"
#include "SeqLoadingControllerParamList.generated.h"

USTRUCT(BlueprintType)
struct FSeqLoadingControllerParamList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSeqLoadingControllerParam> Array;
    
    GAMEBASESYSTEM_API FSeqLoadingControllerParamList();
};

