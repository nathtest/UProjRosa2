#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ImGuiButtonStruct.h"
#include "ImGuiCheckBoxExecDelegateDelegate.h"
#include "ImGuiCheckBoxOptionStruct.h"
#include "ImGuiCheckBoxStruct.h"
#include "ImGuiCollapsingHeaderStruct.h"
#include "ImGuiComboExecDelegateDelegate.h"
#include "ImGuiComboOptionStruct.h"
#include "ImGuiComboStruct.h"
#include "ImGuiInputBufferStruct.h"
#include "ImGuiInputFloatExecDelegateDelegate.h"
#include "ImGuiInputFloatOptionStruct.h"
#include "ImGuiInputFloatStruct.h"
#include "ImGuiInputIntExecDelegateDelegate.h"
#include "ImGuiInputIntOptionStruct.h"
#include "ImGuiInputIntStruct.h"
#include "ImGuiInputTextStruct.h"
#include "ImGuiSliderFloatExecDelegateDelegate.h"
#include "ImGuiSliderFloatOptionStruct.h"
#include "ImGuiSliderFloatStruct.h"
#include "ImGuiFuncLib.generated.h"

UCLASS(Blueprintable)
class IMGUIHELPER_API UImGuiFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UImGuiFuncLib();

    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiSliderFloatSimple(FImGuiSliderFloatOptionStruct InParam, float InValue, FImGuiSliderFloatExecDelegate OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiSliderFloat(FImGuiSliderFloatStruct InParam);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiSeparator();
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiSameLine(int32 InPadding, int32 InOffsetLeft);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiLineSpace();
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiInputText(FImGuiInputTextStruct InParam, UPARAM(Ref) FImGuiInputBufferStruct& InInputBuffer);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiInputIntSimple(FImGuiInputIntOptionStruct InParam, int32 InValue, FImGuiInputIntExecDelegate OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiInputInt(FImGuiInputIntStruct InParam);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiInputFloatSimple(FImGuiInputFloatOptionStruct InParam, float InValue, FImGuiInputFloatExecDelegate OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiInputFloat(FImGuiInputFloatStruct InParam);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiComboSimple(FImGuiComboOptionStruct InParam, int32 InSelectedIndex, FImGuiComboExecDelegate OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiCombo(FImGuiComboStruct InParam);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiCollapsingHeader(FImGuiCollapsingHeaderStruct InParam);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiCheckBoxSimple(FImGuiCheckBoxOptionStruct InParam, bool InValue, FImGuiCheckBoxExecDelegate OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiCheckBox(FImGuiCheckBoxStruct InParam);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ImGuiButton(FImGuiButtonStruct InParam);
    
    UFUNCTION(BlueprintCallable)
    static void Func_GenerateEnumTextArray(const FString& InEnumName, TArray<FText>& OutEnumTextArray);
    
};

