#pragma once
#include "CoreMinimal.h"
#include "G01AbilityCharaStatusEffect.h"
#include "G01AbilityPerClass.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityPerClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbilityNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityCharaStatusEffect StatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityCharaStatusEffect StatusEffectInvert;
    
    FG01AbilityPerClass();
};

