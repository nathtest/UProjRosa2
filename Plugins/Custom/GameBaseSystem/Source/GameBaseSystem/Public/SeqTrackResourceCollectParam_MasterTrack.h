#pragma once
#include "CoreMinimal.h"
#include "SeqTrackResourceCollectParamBase.h"
#include "SeqTrackResourceCollectParam_MasterTrack.generated.h"

class UMovieSceneTrack;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqTrackResourceCollectParam_MasterTrack : public FSeqTrackResourceCollectParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneTrack* MasterTrack;
    
    FSeqTrackResourceCollectParam_MasterTrack();
};

