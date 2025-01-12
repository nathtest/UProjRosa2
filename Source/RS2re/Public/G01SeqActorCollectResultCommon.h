#pragma once
#include "CoreMinimal.h"
#include "G01SeqActorCollectResultCommon.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FG01SeqActorCollectResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MCollisionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MOverlapActors;
    
    RS2RE_API FG01SeqActorCollectResultCommon();
};

