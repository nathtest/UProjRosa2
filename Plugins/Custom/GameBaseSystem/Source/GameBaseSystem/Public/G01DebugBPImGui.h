#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EImGuiTextAlign.h"
#include "G01DebugBpImGuiInputIntInfoStruct.h"
#include "G01DebugBpImGuiSplitLRInfoStruct.h"
#include "G01DebugSubWindowKeyStruct.h"
#include "OnDebugBpImGuiDelegateEventDelegate.h"
#include "OnDebugBpImGuiSimpleDelegateEventDelegate.h"
#include "OnDebugBpImGuiSimpleDelegateEventFNameDelegate.h"
#include "OnDebugBpImGuiSimpleDelegateEventIntDelegate.h"
#include "OnDebugBpImGuiTableDelegateEventDelegate.h"
#include "ResizableTableParam.h"
#include "G01DebugBPImGui.generated.h"

class UDebugMenuSubWindowBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UG01DebugBPImGui : public UObject {
    GENERATED_BODY()
public:
    UG01DebugBPImGui();

    UFUNCTION(BlueprintCallable)
    void Unindent(float Width);
    
    UFUNCTION(BlueprintCallable)
    void Tooltip(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void TextColored(FText InText, FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void TextColor(const FText& InText, float InR, float InG, float InB, float InA);
    
    UFUNCTION(BlueprintCallable)
    void Text(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void Tabs(const FOnDebugBpImGuiSimpleDelegateEventFName& InImpl, const TArray<FName>& InTabNames);
    
    UFUNCTION(BlueprintCallable)
    bool StartTreeNode(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void StartTooltip();
    
    UFUNCTION(BlueprintCallable)
    void StartDisableBlock();
    
    UFUNCTION(BlueprintCallable)
    void Split_LR(const FG01DebugBpImGuiSplitLRInfoStruct& InInfo, const FOnDebugBpImGuiDelegateEvent& InLeftEvent, const FOnDebugBpImGuiDelegateEvent& InRightEvent);
    
    UFUNCTION(BlueprintCallable)
    void Split_H(const FOnDebugBpImGuiSimpleDelegateEventInt& InImpl, int32 InSplitNum, float InHeight);
    
    UFUNCTION(BlueprintCallable)
    void Space();
    
    UFUNCTION(BlueprintCallable)
    void SetNextItemWidth(float Width);
    
    UFUNCTION(BlueprintCallable)
    void SetNextItemPositionY(float In);
    
    UFUNCTION(BlueprintCallable)
    void SetNextItemPositionX(float In);
    
    UFUNCTION(BlueprintCallable)
    void SetNextItemPosition(FVector2D In);
    
    UFUNCTION(BlueprintCallable)
    void SeparatorV();
    
    UFUNCTION(BlueprintCallable)
    void Separator();
    
    UFUNCTION(BlueprintCallable)
    bool SelectableText(const FText& InText, bool InSelect);
    
    UFUNCTION(BlueprintCallable)
    bool SelectableButton(const FText& InText, bool InSelect, EImGuiTextAlign InAlign);
    
    UFUNCTION(BlueprintCallable)
    void ScrollBox(const FOnDebugBpImGuiSimpleDelegateEvent& InImpl, const FVector2D& InSize, bool InIsEnableHorizonScroll);
    
    UFUNCTION(BlueprintCallable)
    void SameLine(float InOffset, float InSpacing);
    
    UFUNCTION(BlueprintCallable)
    void ResizableTable(const TArray<FResizableTableParam>& InColumns, int32 InRowNum, const FOnDebugBpImGuiTableDelegateEvent& InImpl);
    
    UFUNCTION(BlueprintCallable)
    void RenderChildWindow(const FOnDebugBpImGuiSimpleDelegateEvent& InImpl, FVector2D InSize);
    
    UFUNCTION(BlueprintCallable)
    bool MenuItem(const FText& InText, bool InCheck, bool& OutCheck);
    
    UFUNCTION(BlueprintCallable)
    void LoopClipper(const FOnDebugBpImGuiSimpleDelegateEventInt& InImpl, const int32& InSize);
    
    UFUNCTION(BlueprintCallable)
    void LabelTextColored(FText InLabel, FText InText, FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void LabelTextColor(const FText& InLabel, const FText& InText, float InR, float InG, float InB, float InA);
    
    UFUNCTION(BlueprintCallable)
    void LabelText(const FText& InLabel, const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHovered(bool isAllowDisable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    bool InputInt(const FText& InText, UPARAM(Ref) FG01DebugBpImGuiInputIntInfoStruct& InInfo, int32& OutValue, int32& OutPrevValue);
    
    UFUNCTION(BlueprintCallable)
    void Indent(float Width);
    
    UFUNCTION(BlueprintCallable)
    void GetNextItemPosition(FVector2D& Out);
    
    UFUNCTION(BlueprintCallable)
    void EndTreeNode();
    
    UFUNCTION(BlueprintCallable)
    void EndTooltip();
    
    UFUNCTION(BlueprintCallable)
    void EndGroup();
    
    UFUNCTION(BlueprintCallable)
    void EndDisableBlock();
    
    UFUNCTION(BlueprintCallable)
    void EndChildWindow();
    
    UFUNCTION(BlueprintCallable)
    bool DragScalarInt(const FText& OutSideText, const FText& InSideFormatText, int32 InMin, int32 InMax, float InSpeed, int32 InValue, int32& OutValue);
    
    UFUNCTION(BlueprintCallable)
    bool DragScalarFloat(const FText& OutSideText, const FText& InSideFormatText, float InMin, float InMax, float InSpeed, float InValue, float& OutValue);
    
    UFUNCTION(BlueprintCallable)
    void DeleteSubWindow(UObject* InSubWindow);
    
    UFUNCTION(BlueprintCallable)
    UDebugMenuSubWindowBase* CreateSubWindow(FG01DebugSubWindowKeyStruct InSubWindowKey);
    
    UFUNCTION(BlueprintCallable)
    bool Combo(const FText& InTitle, TArray<FText> InTextList, int32 InSelectIndex, int32& OutSelectedIndex);
    
    UFUNCTION(BlueprintCallable)
    void ColorPicker(bool& OutIsUpdate, UPARAM(Ref) FLinearColor& InColor, const FString& InLabel, bool InWithAlphaBar);
    
    UFUNCTION(BlueprintCallable)
    void Checkbox(const FText& InText, bool Inactive, bool& OutIsActive);
    
    UFUNCTION(BlueprintCallable)
    bool ButtonWithSize(FText InText, const FVector2D& InSize, EImGuiTextAlign InAlign);
    
    UFUNCTION(BlueprintCallable)
    bool Buttons(TArray<FText> InTextList, FText& OutPushButtonText);
    
    UFUNCTION(BlueprintCallable)
    bool Button(const FText& InText, EImGuiTextAlign InAlign);
    
    UFUNCTION(BlueprintCallable)
    void BeginGroup();
    
    UFUNCTION(BlueprintCallable)
    void BeginChildWindow(FVector2D InSize, bool& OutDone);
    
    UFUNCTION(BlueprintCallable)
    void AlignTextToFramePadding();
    
};

