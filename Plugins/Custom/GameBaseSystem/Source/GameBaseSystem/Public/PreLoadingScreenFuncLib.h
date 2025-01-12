#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PreLoadingScreenFuncLib.generated.h"

class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UPreLoadingScreenFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPreLoadingScreenFuncLib();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowPreLoadingScreen(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetPreLoadingScreenWidget(UUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HidePreLoadingScreen(const UObject* WorldContextObject);
    
};

