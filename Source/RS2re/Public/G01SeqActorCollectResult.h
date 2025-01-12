#pragma once
#include "CoreMinimal.h"
#include "G01SeqActorCollectResultOpaque.h"
#include "G01SeqActorCollectResultTranslucent.h"
#include "G01SeqActorCollectResult.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqActorCollectResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01SeqActorCollectResultOpaque> MResultOpaque;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01SeqActorCollectResultTranslucent> MResultTranslucent;
    
    RS2RE_API FG01SeqActorCollectResult();
};

