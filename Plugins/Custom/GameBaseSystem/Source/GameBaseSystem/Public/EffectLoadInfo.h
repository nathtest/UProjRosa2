#pragma once
#include "CoreMinimal.h"
#include "EffectID.h"
#include "EffectLoadInfo.generated.h"

USTRUCT(BlueprintType)
struct FEffectLoadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEffectID MEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MEffectLevel;
    
    GAMEBASESYSTEM_API FEffectLoadInfo();
};

