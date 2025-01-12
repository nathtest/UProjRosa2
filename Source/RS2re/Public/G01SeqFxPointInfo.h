#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "G01FXPointInfoBase.h"
#include "G01SeqFxPointInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqFxPointInfo : public FG01FXPointInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID MTargetActor;
    
    RS2RE_API FG01SeqFxPointInfo();
};

