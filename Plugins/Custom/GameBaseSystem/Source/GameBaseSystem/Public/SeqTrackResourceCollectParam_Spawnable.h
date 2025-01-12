#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBinding -FallbackName=MovieSceneBinding
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvaluationOperand -FallbackName=MovieSceneEvaluationOperand
#include "SeqTrackResourceCollectParamBase.h"
#include "SeqTrackResourceCollectParam_Spawnable.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqTrackResourceCollectParam_Spawnable : public FSeqTrackResourceCollectParamBase {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBinding Binding;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvaluationOperand Operand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TemplateObject;
    
    FSeqTrackResourceCollectParam_Spawnable();
};

