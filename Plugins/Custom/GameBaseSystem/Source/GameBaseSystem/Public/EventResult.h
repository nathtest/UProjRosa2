#pragma once
#include "CoreMinimal.h"
#include "EventEndParams.h"
#include "EventResult.generated.h"

class AEventObjectBase;

USTRUCT(BlueprintType)
struct FEventResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEventObjectBase* EndEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventEndParams EndParams;
    
    GAMEBASESYSTEM_API FEventResult();
};

