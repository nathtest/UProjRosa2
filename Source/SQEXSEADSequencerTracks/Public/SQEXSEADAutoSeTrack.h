#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "SQEXSEADAutoSeTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class SQEXSEADSEQUENCERTRACKS_API USQEXSEADAutoSeTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> AutoSESections;
    
public:
    USQEXSEADAutoSeTrack();


    // Fix for true pure virtual functions not being implemented
};

