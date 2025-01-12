#pragma once
#include "CoreMinimal.h"
#include "G01SeqCameraSubSectionCache.generated.h"

class UMovieSceneSubSection;
class UMovieSceneSubTrack;

USTRUCT(BlueprintType)
struct RS2RE_API FG01SeqCameraSubSectionCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneSubTrack* MParentTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneSubSection* MSection;
    
    FG01SeqCameraSubSectionCache();
};

