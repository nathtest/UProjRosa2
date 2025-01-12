#pragma once
#include "CoreMinimal.h"
#include "G01SeqActorCollectParamTranslucent.h"
#include "G01SeqActorCollectResultCommon.h"
#include "G01SeqActorCollectResultTranslucent.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqActorCollectResultTranslucent : public FG01SeqActorCollectResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqActorCollectParamTranslucent MParamTranslucent;
    
    RS2RE_API FG01SeqActorCollectResultTranslucent();
};

