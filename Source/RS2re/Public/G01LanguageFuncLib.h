#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01LanguageFuncLib.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01LanguageFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01LanguageFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSystemLanguage();
    
};

