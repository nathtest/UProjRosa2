#pragma once
#include "CoreMinimal.h"
#include "SeqCameraBlendParam.h"
#include "SeqCameraSwitchBeginParam.generated.h"

USTRUCT(BlueprintType)
struct FSeqCameraSwitchBeginParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqCameraBlendParam MBlendParam;
    
    GAMEBASESYSTEM_API FSeqCameraSwitchBeginParam();
};

