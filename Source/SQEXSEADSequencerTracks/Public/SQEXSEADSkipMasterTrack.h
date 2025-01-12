#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "SQEXSEADSkipMasterTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class SQEXSEADSEQUENCERTRACKS_API USQEXSEADSkipMasterTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> SkipSections;
    
public:
    USQEXSEADSkipMasterTrack();


    // Fix for true pure virtual functions not being implemented
};

