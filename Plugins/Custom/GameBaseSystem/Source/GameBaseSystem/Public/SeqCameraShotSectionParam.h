#pragma once
#include "CoreMinimal.h"
#include "SeqCameraShotSectionParam.generated.h"

class UMovieSceneSequence;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqCameraShotSectionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeginFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndFrame;
    
    FSeqCameraShotSectionParam();
};

