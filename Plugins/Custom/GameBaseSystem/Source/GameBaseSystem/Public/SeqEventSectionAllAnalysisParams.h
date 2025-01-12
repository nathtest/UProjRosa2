#pragma once
#include "CoreMinimal.h"
#include "SeqEventSectionAnalysisParamBase.h"
#include "SeqEventSectionAllAnalysisParams.generated.h"

class UMovieScene;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqEventSectionAllAnalysisParams : public FSeqEventSectionAnalysisParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieScene* MovieScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ObjectFilterClass;
    
    FSeqEventSectionAllAnalysisParams();
};

