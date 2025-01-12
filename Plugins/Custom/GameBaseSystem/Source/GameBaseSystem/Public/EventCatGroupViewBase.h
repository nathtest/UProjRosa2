#pragma once
#include "CoreMinimal.h"
#include "EventCatGroupViewBase.generated.h"

USTRUCT(BlueprintType)
struct FEventCatGroupViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MCategoryName;
    
    GAMEBASESYSTEM_API FEventCatGroupViewBase();
};

