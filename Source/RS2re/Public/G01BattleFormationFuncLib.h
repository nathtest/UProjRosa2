#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EG01BattleArtsAttribute.h"
#include "G01BattleFormationAttrEffect.h"
#include "G01BattleFormationFuncLib.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01BattleFormationFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01BattleFormationFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CalcEffectByAttr(const FG01BattleFormationAttrEffect& InEffect, EG01BattleArtsAttribute InAttr, int32& Out);
    
};

