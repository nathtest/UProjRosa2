#pragma once
#include "CoreMinimal.h"
#include "G01BattleLinkEffectStruct.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleLinkEffectStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* FxInstance;
    
    FG01BattleLinkEffectStruct();
};

