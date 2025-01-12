#pragma once
#include "CoreMinimal.h"
#include "EffectID.generated.h"

USTRUCT(BlueprintType)
struct FEffectID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MEffectID;
    
    GAMEBASESYSTEM_API FEffectID();
};
FORCEINLINE uint32 GetTypeHash(const FEffectID) { return 0; }

