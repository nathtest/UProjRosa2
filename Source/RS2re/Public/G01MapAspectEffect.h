#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine\DataTable.h"
#include "EG01MapAspectType.h"
#include "G01MapAspectEffect.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FG01MapAspectEffect : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01MapAspectType MMapAspect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> MEffect;
    
    RS2RE_API FG01MapAspectEffect();
};

