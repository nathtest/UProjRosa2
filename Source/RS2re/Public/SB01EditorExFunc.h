#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SB01EditorExFunc.generated.h"

UCLASS(Blueprintable)
class RS2RE_API USB01EditorExFunc : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USB01EditorExFunc();

    UFUNCTION(BlueprintCallable)
    static void WriteFile(const FString& Path, const FString& Args);
    
    UFUNCTION(BlueprintCallable)
    static void CreateProcess(const FString& Path, const FString& Args);
    
};

