#include "G01DebugImGuiHelper_InputText.h"

UG01DebugImGuiHelper_InputText::UG01DebugImGuiHelper_InputText() {
    this->InputBuffer.AddDefaulted(256);
}

void UG01DebugImGuiHelper_InputText::SetText(FText InText) {
}

void UG01DebugImGuiHelper_InputText::SetBufferSize(int32 InBufferSize) {
}

void UG01DebugImGuiHelper_InputText::Reset() {
}

bool UG01DebugImGuiHelper_InputText::InputTextMultiline(UG01DebugBPImGui* InImGui, const FText& InText, FText& OutText) {
    return false;
}

bool UG01DebugImGuiHelper_InputText::InputText(UG01DebugBPImGui* InImGui, const FText& InText, FText& OutText) {
    return false;
}

FString UG01DebugImGuiHelper_InputText::GetText() const {
    return TEXT("");
}

bool UG01DebugImGuiHelper_InputText::Filter(const FString& InStr) {
    return false;
}


