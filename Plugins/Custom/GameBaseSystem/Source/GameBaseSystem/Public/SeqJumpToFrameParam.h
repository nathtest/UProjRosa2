#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EUpdatePositionMethod -FallbackName=EUpdatePositionMethod
#include "MovieSceneSequencePlayer.h"
#include "SeqJumpToFrameParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqJumpToFrameParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTime MFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUpdatePositionMethod MUpdateMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MAnimBlendTime;
    
    FSeqJumpToFrameParam();
};

