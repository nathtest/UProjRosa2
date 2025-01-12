#pragma once
#include "CoreMinimal.h"
#include "SeqSubSceneSectionData.h"
#include "SeqSubSceneData.generated.h"

class UMovieSceneSubTrack;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqSubSceneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneSubTrack* Track;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RowIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSeqSubSceneSectionData> Sections;
    
    FSeqSubSceneData();
};

