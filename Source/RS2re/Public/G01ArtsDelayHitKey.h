#pragma once
#include "CoreMinimal.h"
#include "G01ArtsDelayHitKey.generated.h"

USTRUCT(BlueprintType)
struct FG01ArtsDelayHitKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MultiIndex;
    
    RS2RE_API FG01ArtsDelayHitKey();
};
FORCEINLINE uint32 GetTypeHash(const FG01ArtsDelayHitKey) { return 0; }

