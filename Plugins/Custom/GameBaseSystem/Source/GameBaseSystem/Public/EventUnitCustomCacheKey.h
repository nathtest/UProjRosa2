#pragma once
#include "CoreMinimal.h"
#include "EventUnitCustomCacheKey.generated.h"

USTRUCT(BlueprintType)
struct FEventUnitCustomCacheKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MUserClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MObjectUniqueID;
    
    GAMEBASESYSTEM_API FEventUnitCustomCacheKey();
};
FORCEINLINE uint32 GetTypeHash(const FEventUnitCustomCacheKey) { return 0; }

