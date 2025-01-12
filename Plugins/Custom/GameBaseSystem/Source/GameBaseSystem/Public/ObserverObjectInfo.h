#pragma once
#include "CoreMinimal.h"
#include "ObserverObjectInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FObserverObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    FObserverObjectInfo();
};

