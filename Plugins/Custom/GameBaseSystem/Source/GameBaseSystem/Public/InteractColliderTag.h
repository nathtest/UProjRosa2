#pragma once
#include "CoreMinimal.h"
#include "InteractColliderTag.generated.h"

USTRUCT(BlueprintType)
struct FInteractColliderTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MColliderTag;
    
    GAMEBASESYSTEM_API FInteractColliderTag();
};
FORCEINLINE uint32 GetTypeHash(const FInteractColliderTag) { return 0; }

