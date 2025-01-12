#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "MovieSceneObjectBindingID.h"
#include "SeqActorBinder_VARelatedObjectParam.generated.h"

USTRUCT(BlueprintType)
struct FSeqActorBinder_VARelatedObjectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneObjectBindingID> IDs;
    
    GAMEBASESYSTEM_API FSeqActorBinder_VARelatedObjectParam();
};

