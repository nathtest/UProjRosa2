#pragma once
#include "CoreMinimal.h"
#include "ObserverObjectInfo.h"
#include "ObserverDebugObjectInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FObserverDebugObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObserverObjectInfo> ObjectList;
    
    FObserverDebugObjectInfo();
};

