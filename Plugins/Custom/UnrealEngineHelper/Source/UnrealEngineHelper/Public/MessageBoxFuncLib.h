#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAppReturnType -FallbackName=EAppReturnType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MessageBoxFuncLib.generated.h"

UCLASS(Blueprintable)
class UMessageBoxFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMessageBoxFuncLib();

    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EAppReturnType::Type> ShowMessageBoxYN(bool InExeption, const FString& InTitle, const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EAppReturnType::Type> ShowMessageBoxOkCancel(bool InExeption, const FString& InTitle, const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    static void ShowMessageBoxOK(bool InExeption, const FString& InTitle, const FString& InMessage);
    
};

