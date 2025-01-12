#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EG01BattleCharacterAnimReactionType.h"
#include "G01BattleCharacterFuncLib.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01BattleCharacterFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01BattleCharacterFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Func_ReactionToString(EG01BattleCharacterAnimReactionType InType, FString& OutString);
    
};

