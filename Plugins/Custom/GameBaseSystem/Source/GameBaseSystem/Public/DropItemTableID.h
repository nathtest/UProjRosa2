#pragma once
#include "CoreMinimal.h"
#include "DropItemTableID.generated.h"

USTRUCT(BlueprintType)
struct FDropItemTableID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MDropItemId;
    
    GAMEBASESYSTEM_API FDropItemTableID();
};
FORCEINLINE uint32 GetTypeHash(const FDropItemTableID) { return 0; }

