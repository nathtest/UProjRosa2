#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "UiFuncLib.generated.h"

class UTextBlock;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UUiFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUiFuncLib();

private:
    UFUNCTION(BlueprintCallable)
    static void Func_SettingNumText(int32 InNum, bool InTopBlank, TArray<UTextBlock*> InWidgetList);
    
    UFUNCTION(BlueprintCallable)
    static int32 Func_SelectLoopIndex(bool InIsIncrement, int32 InMoveNum, int32 InCurrentIndex, int32 InMinIndex, int32 InMaxIndex);
    
    UFUNCTION(BlueprintCallable)
    static FText Func_GetDigitNumText(int32 InNum, int32 InDigit, bool InTopBlank);
    
};

