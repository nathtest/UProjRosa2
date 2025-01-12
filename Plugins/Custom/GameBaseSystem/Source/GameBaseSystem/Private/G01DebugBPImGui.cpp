#include "G01DebugBPImGui.h"

UG01DebugBPImGui::UG01DebugBPImGui() {
}

void UG01DebugBPImGui::Unindent(float Width) {
}

void UG01DebugBPImGui::Tooltip(const FText& InText) {
}

void UG01DebugBPImGui::TextColored(FText InText, FLinearColor InColor) {
}

void UG01DebugBPImGui::TextColor(const FText& InText, float InR, float InG, float InB, float InA) {
}

void UG01DebugBPImGui::Text(const FText& InText) {
}

void UG01DebugBPImGui::Tabs(const FOnDebugBpImGuiSimpleDelegateEventFName& InImpl, const TArray<FName>& InTabNames) {
}

bool UG01DebugBPImGui::StartTreeNode(FText InText) {
    return false;
}

void UG01DebugBPImGui::StartTooltip() {
}

void UG01DebugBPImGui::StartDisableBlock() {
}

void UG01DebugBPImGui::Split_LR(const FG01DebugBpImGuiSplitLRInfoStruct& InInfo, const FOnDebugBpImGuiDelegateEvent& InLeftEvent, const FOnDebugBpImGuiDelegateEvent& InRightEvent) {
}

void UG01DebugBPImGui::Split_H(const FOnDebugBpImGuiSimpleDelegateEventInt& InImpl, int32 InSplitNum, float InHeight) {
}

void UG01DebugBPImGui::Space() {
}

void UG01DebugBPImGui::SetNextItemWidth(float Width) {
}

void UG01DebugBPImGui::SetNextItemPositionY(float In) {
}

void UG01DebugBPImGui::SetNextItemPositionX(float In) {
}

void UG01DebugBPImGui::SetNextItemPosition(FVector2D In) {
}

void UG01DebugBPImGui::SeparatorV() {
}

void UG01DebugBPImGui::Separator() {
}

bool UG01DebugBPImGui::SelectableText(const FText& InText, bool InSelect) {
    return false;
}

bool UG01DebugBPImGui::SelectableButton(const FText& InText, bool InSelect, EImGuiTextAlign InAlign) {
    return false;
}

void UG01DebugBPImGui::ScrollBox(const FOnDebugBpImGuiSimpleDelegateEvent& InImpl, const FVector2D& InSize, bool InIsEnableHorizonScroll) {
}

void UG01DebugBPImGui::SameLine(float InOffset, float InSpacing) {
}

void UG01DebugBPImGui::ResizableTable(const TArray<FResizableTableParam>& InColumns, int32 InRowNum, const FOnDebugBpImGuiTableDelegateEvent& InImpl) {
}

void UG01DebugBPImGui::RenderChildWindow(const FOnDebugBpImGuiSimpleDelegateEvent& InImpl, FVector2D InSize) {
}

bool UG01DebugBPImGui::MenuItem(const FText& InText, bool InCheck, bool& OutCheck) {
    return false;
}

void UG01DebugBPImGui::LoopClipper(const FOnDebugBpImGuiSimpleDelegateEventInt& InImpl, const int32& InSize) {
}

void UG01DebugBPImGui::LabelTextColored(FText InLabel, FText InText, FLinearColor InColor) {
}

void UG01DebugBPImGui::LabelTextColor(const FText& InLabel, const FText& InText, float InR, float InG, float InB, float InA) {
}

void UG01DebugBPImGui::LabelText(const FText& InLabel, const FText& InText) {
}

bool UG01DebugBPImGui::IsHovered(bool isAllowDisable) const {
    return false;
}

bool UG01DebugBPImGui::IsActive() const {
    return false;
}

bool UG01DebugBPImGui::InputInt(const FText& InText, FG01DebugBpImGuiInputIntInfoStruct& InInfo, int32& OutValue, int32& OutPrevValue) {
    return false;
}

void UG01DebugBPImGui::Indent(float Width) {
}

void UG01DebugBPImGui::GetNextItemPosition(FVector2D& Out) {
}

void UG01DebugBPImGui::EndTreeNode() {
}

void UG01DebugBPImGui::EndTooltip() {
}

void UG01DebugBPImGui::EndGroup() {
}

void UG01DebugBPImGui::EndDisableBlock() {
}

void UG01DebugBPImGui::EndChildWindow() {
}

bool UG01DebugBPImGui::DragScalarInt(const FText& OutSideText, const FText& InSideFormatText, int32 InMin, int32 InMax, float InSpeed, int32 InValue, int32& OutValue) {
    return false;
}

bool UG01DebugBPImGui::DragScalarFloat(const FText& OutSideText, const FText& InSideFormatText, float InMin, float InMax, float InSpeed, float InValue, float& OutValue) {
    return false;
}

void UG01DebugBPImGui::DeleteSubWindow(UObject* InSubWindow) {
}

UDebugMenuSubWindowBase* UG01DebugBPImGui::CreateSubWindow(FG01DebugSubWindowKeyStruct InSubWindowKey) {
    return NULL;
}

bool UG01DebugBPImGui::Combo(const FText& InTitle, TArray<FText> InTextList, int32 InSelectIndex, int32& OutSelectedIndex) {
    return false;
}

void UG01DebugBPImGui::ColorPicker(bool& OutIsUpdate, FLinearColor& InColor, const FString& InLabel, bool InWithAlphaBar) {
}

void UG01DebugBPImGui::Checkbox(const FText& InText, bool Inactive, bool& OutIsActive) {
}

bool UG01DebugBPImGui::ButtonWithSize(FText InText, const FVector2D& InSize, EImGuiTextAlign InAlign) {
    return false;
}

bool UG01DebugBPImGui::Buttons(TArray<FText> InTextList, FText& OutPushButtonText) {
    return false;
}

bool UG01DebugBPImGui::Button(const FText& InText, EImGuiTextAlign InAlign) {
    return false;
}

void UG01DebugBPImGui::BeginGroup() {
}

void UG01DebugBPImGui::BeginChildWindow(FVector2D InSize, bool& OutDone) {
}

void UG01DebugBPImGui::AlignTextToFramePadding() {
}


