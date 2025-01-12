#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "G01SeqMsgCommonParam.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqMsgCommonParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID MSpeaker;
    
    RS2RE_API FG01SeqMsgCommonParam();
};

