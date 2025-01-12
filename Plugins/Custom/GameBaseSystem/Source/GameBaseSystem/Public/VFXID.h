#pragma once
#include "CoreMinimal.h"
#include "VFXID.generated.h"

USTRUCT(BlueprintType)
struct FVFXID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MVFXID;
    
    GAMEBASESYSTEM_API FVFXID();
};
FORCEINLINE uint32 GetTypeHash(const FVFXID) { return 0; }

