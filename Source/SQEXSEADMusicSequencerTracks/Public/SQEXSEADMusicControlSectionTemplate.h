#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "SQEXSEADMusicControlSectionTemplate.generated.h"

class USQEXSEADMusicControlSection;

USTRUCT(BlueprintType)
struct FSQEXSEADMusicControlSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEXSEADMusicControlSection* MusicSection;
    
    SQEXSEADMUSICSEQUENCERTRACKS_API FSQEXSEADMusicControlSectionTemplate();
};

