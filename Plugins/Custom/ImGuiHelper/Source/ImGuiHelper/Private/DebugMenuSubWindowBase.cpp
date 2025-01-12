#include "DebugMenuSubWindowBase.h"

UDebugMenuSubWindowBase::UDebugMenuSubWindowBase() {
}

void UDebugMenuSubWindowBase::SetWindowSize(const FVector2D& Size) {
}

void UDebugMenuSubWindowBase::SetWindowPosition(const FVector2D& Pos) {
}

void UDebugMenuSubWindowBase::SetVisible(bool bInShow) {
}

void UDebugMenuSubWindowBase::SetMinimal(bool bin) {
}

void UDebugMenuSubWindowBase::SetFavorite(bool bin) {
}

bool UDebugMenuSubWindowBase::IsVisible() const {
    return false;
}

bool UDebugMenuSubWindowBase::IsMinimal() const {
    return false;
}

bool UDebugMenuSubWindowBase::IsFavorite() const {
    return false;
}

FVector2D UDebugMenuSubWindowBase::GetWindowSize() {
    return FVector2D{};
}

FVector2D UDebugMenuSubWindowBase::GetWindowPositions() {
    return FVector2D{};
}


