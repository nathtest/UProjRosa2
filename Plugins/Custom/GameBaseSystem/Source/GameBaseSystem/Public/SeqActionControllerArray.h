#pragma once
#include "CoreMinimal.h"
#include "SeqActionControllerBindInfo.h"
#include "SeqActionControllerArray.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqActionControllerArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqActionControllerBindInfo> MActionControllers;
    
    FSeqActionControllerArray();
};

