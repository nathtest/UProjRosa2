#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "TextSystemFuncLib.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UTextSystemFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTextSystemFuncLib();

    UFUNCTION(BlueprintCallable)
    static FText Func_FormatByTextArgs(FText InOriginalText, TArray<FString> InTags, TArray<FText> InValues);
    
};

