#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "SQEXSEADAudioSectionTemplate.generated.h"

class USQEXSEADAudioSection;

USTRUCT(BlueprintType)
struct FSQEXSEADAudioSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEXSEADAudioSection* AudioSection;
    
    SQEXSEADSEQUENCERTRACKS_API FSQEXSEADAudioSectionTemplate();
};

