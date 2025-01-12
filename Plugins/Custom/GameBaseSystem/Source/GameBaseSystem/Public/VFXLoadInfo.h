#pragma once
#include "CoreMinimal.h"
#include "VFXID.h"
#include "VFXLoadInfo.generated.h"

USTRUCT(BlueprintType)
struct FVFXLoadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFXID MVFXID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MVFXRank;
    
    GAMEBASESYSTEM_API FVFXLoadInfo();
};

