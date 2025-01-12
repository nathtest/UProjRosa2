#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "G01SeqNotifyActionCommand.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqNotifyActionCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID MAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MActionCommand;
    
    RS2RE_API FG01SeqNotifyActionCommand();
};

