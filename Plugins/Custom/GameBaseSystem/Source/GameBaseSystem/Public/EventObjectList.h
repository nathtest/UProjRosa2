#pragma once
#include "CoreMinimal.h"
#include "EventObjectList.generated.h"

class AEventObjectBase;

USTRUCT(BlueprintType)
struct FEventObjectList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEventObjectBase*> Events;
    
    GAMEBASESYSTEM_API FEventObjectList();
};

