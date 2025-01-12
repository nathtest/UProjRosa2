#include "G01DebugArtsViewerMenu.h"
#include "Templates/SubclassOf.h"

UG01DebugArtsViewerMenu::UG01DebugArtsViewerMenu() {
    this->TabSettingTable = NULL;
}

void UG01DebugArtsViewerMenu::UnloadLevelInstance(ULevelStreamingDynamic* InStream) {
}

AActor* UG01DebugArtsViewerMenu::SpawnActor(TSubclassOf<AActor> InClass) {
    return NULL;
}

void UG01DebugArtsViewerMenu::SetVisibility(bool InIsVisible) {
}

void UG01DebugArtsViewerMenu::SetCreateSettings(const FG01DebugArtsViewerWindowSettings& InSettings) {
}






float UG01DebugArtsViewerMenu::MontageSectionStartTime(UAnimMontage* InMontage, FName InSectionName) {
    return 0.0f;
}

void UG01DebugArtsViewerMenu::LoadLevelIsntance(const TSoftObjectPtr<UWorld>& InLevel, FVector InLocation, FRotator InRotation, const FString& InOptions, bool& OutResult, ULevelStreamingDynamic*& OutStream) {
}

void UG01DebugArtsViewerMenu::ImGui_TextToolTip(const FText& InMessage, FName InFontName) {
}

void UG01DebugArtsViewerMenu::ImGui_TextColored(const FText& InText, FLinearColor InColor, FName InFontName) {
}

void UG01DebugArtsViewerMenu::ImGui_Text(const FText& InText, FName InFontName) {
}

void UG01DebugArtsViewerMenu::ImGui_SplitH(const FString& InName, int32 InSplitNum, const FG01ArtsViewerSimpleDelegateInt& InDelegate, float InHeight) {
}

void UG01DebugArtsViewerMenu::ImGui_Separator() {
}

void UG01DebugArtsViewerMenu::ImGui_ScrollBox(const FG01DebugArtsViewer_ImGuiScrollBoxParam& InParam) {
}

void UG01DebugArtsViewerMenu::ImGui_SameLine(int32 InPadding, int32 InOffsetLeft) {
}

void UG01DebugArtsViewerMenu::ImGui_LoopClipper(const FG01ArtsViewerSimpleDelegateInt& InImpl, const int32& InSize) {
}

void UG01DebugArtsViewerMenu::ImGui_LineSpace() {
}

bool UG01DebugArtsViewerMenu::ImGui_IsItemActive() {
    return false;
}

bool UG01DebugArtsViewerMenu::ImGui_IsHovered() {
    return false;
}

void UG01DebugArtsViewerMenu::ImGui_InputText(const FImGuiInputTextStruct& InParam, FImGuiInputBufferStruct& InInputBuffer) {
}

void UG01DebugArtsViewerMenu::ImGui_InputInt(const FImGuiInputIntOptionStruct& InParam, int32 InValue, FImGuiInputIntExecDelegate OnValueChanged) {
}

void UG01DebugArtsViewerMenu::ImGui_InputFloat(const FImGuiInputFloatOptionStruct& InParam, float InValue, FImGuiInputFloatExecDelegate OnValueChanged) {
}

void UG01DebugArtsViewerMenu::ImGui_Combo(const FImGuiComboOptionStruct& InParam, int32 InSelectedIndex, FImGuiComboExecDelegate OnValueChanged) {
}

void UG01DebugArtsViewerMenu::ImGui_CheckBox(const FString& InName, bool InIsActive, bool& OutIsActive, bool& OutIsPressed) {
}

bool UG01DebugArtsViewerMenu::ImGui_Button(const FString& InName, const FVector2D& InSize) {
    return false;
}

UWorld* UG01DebugArtsViewerMenu::GetWorld() const {
    return NULL;
}

UG01DebugBPImGui* UG01DebugArtsViewerMenu::GetImGuiBP() const {
    return NULL;
}

FG01DebugArtsViewerWindowSettings UG01DebugArtsViewerMenu::GetCreateSettings() const {
    return FG01DebugArtsViewerWindowSettings{};
}

void UG01DebugArtsViewerMenu::GetAllActorOfClass(TSubclassOf<AActor> InClass, TArray<AActor*>& OutActors) {
}

void UG01DebugArtsViewerMenu::CreateFont(const FG01ArtsViewerFontCreateParam& InParam) {
}


