#pragma once
#include "CoreMinimal.h"
#include "G01SeqActorCollectParamOpaque.h"
#include "G01SeqActorCollectResultCommon.h"
#include "G01SeqActorCollectResultOpaque.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqActorCollectResultOpaque : public FG01SeqActorCollectResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqActorCollectParamOpaque MParamOpaque;
    
    RS2RE_API FG01SeqActorCollectResultOpaque();
};

