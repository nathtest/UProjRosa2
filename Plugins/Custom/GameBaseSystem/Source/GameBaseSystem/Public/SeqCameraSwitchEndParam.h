#pragma once
#include "CoreMinimal.h"
#include "SeqCameraBlendParam.h"
#include "SeqCameraRotationKeepParam.h"
#include "SeqCameraSwitchEndParam.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSeqCameraSwitchEndParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MBlendTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqCameraBlendParam MBlendParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsTransitionDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqCameraRotationKeepParam MRotationKeepParam;
    
    GAMEBASESYSTEM_API FSeqCameraSwitchEndParam();
};

