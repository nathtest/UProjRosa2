#pragma once
#include "CoreMinimal.h"
#include "VFXResoureMapID.generated.h"

USTRUCT(BlueprintType)
struct FVFXResoureMapID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MVFXResoureMapID;
    
    GAMEBASESYSTEM_API FVFXResoureMapID();
};
FORCEINLINE uint32 GetTypeHash(const FVFXResoureMapID) { return 0; }

