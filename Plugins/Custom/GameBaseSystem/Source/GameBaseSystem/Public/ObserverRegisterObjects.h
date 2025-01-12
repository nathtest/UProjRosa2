#pragma once
#include "CoreMinimal.h"
#include "ObserverObjectInfo.h"
#include "ObserverRegisterObjects.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FObserverRegisterObjects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObserverObjectInfo> Objects;
    
    FObserverRegisterObjects();
};

