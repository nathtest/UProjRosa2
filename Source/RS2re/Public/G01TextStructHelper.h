#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01TextAnalysisData.h"
#include "G01TextStructHelper.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01TextStructHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01TextStructHelper();

    UFUNCTION(BlueprintCallable)
    static FString Func_AnalysisData_GetSourceTextID(const FG01TextAnalysisData& InData);
    
    UFUNCTION(BlueprintCallable)
    static FString Func_AnalysisData_GetSourceTextContent(const FG01TextAnalysisData& InData);
    
};

