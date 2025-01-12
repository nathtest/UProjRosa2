#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannel -FallbackName=MovieSceneChannel
#include "SQEXSEADMusicLayerControlPayload.h"
#include "SQEXSEADMusicLayerControlChannel.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct SQEXSEADMUSICSEQUENCERTRACKS_API FSQEXSEADMusicLayerControlChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEXSEADMusicLayerControlPayload> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* ControlKeyEnum;
    
public:
    FSQEXSEADMusicLayerControlChannel();
};

