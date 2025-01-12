#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "SQEXSEADSkipMasterSectionTemplate.generated.h"

class USQEXSEADSkipMasterSection;

USTRUCT(BlueprintType)
struct FSQEXSEADSkipMasterSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEXSEADSkipMasterSection* SkipMasterSection;
    
    SQEXSEADSEQUENCERTRACKS_API FSQEXSEADSkipMasterSectionTemplate();
};

