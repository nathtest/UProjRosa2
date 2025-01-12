#pragma once
#include "CoreMinimal.h"
#include "SeqTrackBindingInfo.generated.h"

class UMovieScene;
class UObject;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqTrackBindingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieScene* OwnerMovieScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TemplateObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameBase;
    
    FSeqTrackBindingInfo();
};

