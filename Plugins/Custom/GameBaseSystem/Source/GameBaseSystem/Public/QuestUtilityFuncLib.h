#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "QuestSectionNameView.h"
#include "QuestUtilityFuncLib.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQuestUtilityFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuestUtilityFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_SectionName(const FQuestSectionNameView& InSection1, FQuestSectionNameView InSection2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_SectionName(const FQuestSectionNameView& InSection1, FQuestSectionNameView InSection2);
    
};

