#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01TutorialID.h"
#include "G01TutorialFuncLib.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01TutorialFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01TutorialFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Func_TutorialID_NotEqual(const FG01TutorialID& InA, const FG01TutorialID& InB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Func_TutorialID_EqualEqual(const FG01TutorialID& InA, const FG01TutorialID& InB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Func_IsValid(const FG01TutorialID& InID);
    
};

