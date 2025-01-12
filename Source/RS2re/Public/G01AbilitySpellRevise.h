#pragma once
#include "CoreMinimal.h"
#include "G01AbilityRevise.h"
#include "G01AbilitySpellRevise.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilitySpellRevise {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityRevise Pyrology;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityRevise Hydrology;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityRevise Aerology;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityRevise Terrology;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityRevise Cosmology;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityRevise Umbrology;
    
    FG01AbilitySpellRevise();
};

