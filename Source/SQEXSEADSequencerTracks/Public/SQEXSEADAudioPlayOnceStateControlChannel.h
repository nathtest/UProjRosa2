#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannel -FallbackName=MovieSceneChannel
#include "SQEXSEADAudioPlayOnceStateControlPayload.h"
#include "SQEXSEADAudioPlayOnceStateControlChannel.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct SQEXSEADSEQUENCERTRACKS_API FSQEXSEADAudioPlayOnceStateControlChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEXSEADAudioPlayOnceStateControlPayload> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* ControlKeyEnum;
    
public:
    FSQEXSEADAudioPlayOnceStateControlChannel();
};

