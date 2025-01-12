#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "SQEXSEADAudioPlayOnceTriggerSectionTemplate.generated.h"

class USQEXSEADAudioPlayOnceTriggerSection;

USTRUCT(BlueprintType)
struct FSQEXSEADAudioPlayOnceTriggerSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEXSEADAudioPlayOnceTriggerSection* AudioSection;
    
    SQEXSEADSEQUENCERTRACKS_API FSQEXSEADAudioPlayOnceTriggerSectionTemplate();
};

