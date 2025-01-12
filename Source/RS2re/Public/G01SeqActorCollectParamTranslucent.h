#pragma once
#include "CoreMinimal.h"
#include "G01SeqActorCollectParamTranslucent.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqActorCollectParamTranslucent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MTransparency;
    
    RS2RE_API FG01SeqActorCollectParamTranslucent();
};

