#pragma once
#include "CoreMinimal.h"
#include "G01SeqLipsyncSpeakerCommon.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FG01SeqLipsyncSpeakerCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* VisualActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName EventKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFinished;
    
    RS2RE_API FG01SeqLipsyncSpeakerCommon();
};

