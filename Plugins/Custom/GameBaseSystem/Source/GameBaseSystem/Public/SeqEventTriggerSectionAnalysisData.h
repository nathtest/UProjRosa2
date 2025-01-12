#pragma once
#include "CoreMinimal.h"
#include "SeqEventTriggerSectionAnalysisData.generated.h"

class UFunction;
class UMovieSceneEventTriggerSection;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqEventTriggerSectionAnalysisData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ArgumentsBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneEventTriggerSection* Section;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataIndex;
    
    FSeqEventTriggerSectionAnalysisData();
};

