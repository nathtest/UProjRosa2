#pragma once
#include "CoreMinimal.h"
#include "AnimBlendPlayParam.h"
#include "AnimBlendPlayParamList.generated.h"

USTRUCT(BlueprintType)
struct FAnimBlendPlayParamList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimBlendPlayParam> MBlendPlayParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MActiveChildIndex;
    
    GAMEBASESYSTEM_API FAnimBlendPlayParamList();
};

