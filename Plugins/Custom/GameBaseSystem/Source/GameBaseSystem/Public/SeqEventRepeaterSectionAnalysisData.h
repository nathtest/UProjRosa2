#pragma once
#include "CoreMinimal.h"
#include "SeqEventRepeaterSectionAnalysisData.generated.h"

class UFunction;
class UMovieSceneEventRepeaterSection;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqEventRepeaterSectionAnalysisData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ArgumentsBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneEventRepeaterSection* Section;
    
    FSeqEventRepeaterSectionAnalysisData();
};

