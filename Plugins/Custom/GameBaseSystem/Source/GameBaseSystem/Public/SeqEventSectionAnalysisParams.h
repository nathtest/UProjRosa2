#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBinding -FallbackName=MovieSceneBinding
#include "SeqEventSectionAnalysisParamBase.h"
#include <MovieSceneBinding.h>
#include "SeqEventSectionAnalysisParams.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqEventSectionAnalysisParams : public FSeqEventSectionAnalysisParamBase {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBinding Binding;
    
    FSeqEventSectionAnalysisParams();
};

