#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "SQEXSEADMusicControlTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class SQEXSEADMUSICSEQUENCERTRACKS_API USQEXSEADMusicControlTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> ControlSections;
    
public:
    USQEXSEADMusicControlTrack();


    // Fix for true pure virtual functions not being implemented
};

