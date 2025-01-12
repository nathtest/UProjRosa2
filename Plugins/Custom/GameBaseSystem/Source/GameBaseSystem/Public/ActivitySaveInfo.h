#pragma once
#include "CoreMinimal.h"
#include "EActivityState.h"
#include "ActivitySaveInfo.generated.h"

USTRUCT(BlueprintType)
struct FActivitySaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, EActivityState> MActivityStates;
    
    GAMEBASESYSTEM_API FActivitySaveInfo();
};

