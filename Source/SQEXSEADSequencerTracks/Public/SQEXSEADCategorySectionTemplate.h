#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "SQEXSEADCategorySectionTemplate.generated.h"

class USQEXSEADCategorySection;

USTRUCT(BlueprintType)
struct FSQEXSEADCategorySectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEXSEADCategorySection* CategorySection;
    
    SQEXSEADSEQUENCERTRACKS_API FSQEXSEADCategorySectionTemplate();
};

