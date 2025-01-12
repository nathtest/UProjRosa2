#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequenceID -FallbackName=MovieSceneSequenceID
#include <MovieSceneSequenceID.h>
#include "SeqSubSceneSectionData.generated.h"

class UMovieSceneSubSection;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqSubSceneSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneSubSection* Section;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMovieSceneSequenceID SequenceID;
    
    FSeqSubSceneSectionData();
};

