#include "SingleWindowImGuiActor.h"

ASingleWindowImGuiActor::ASingleWindowImGuiActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WindowTitle = TEXT("No Title Name");
    this->bIsAlwaysWindowAnchorFix = true;
    this->bIsNoMove = true;
    this->bIsNoCollapse = true;
    this->bIsNoResize = true;
    this->bIsAlwaysAutoResize = true;
    this->bIsVisible = true;
    this->bIsAnchorDirty = true;
}

void ASingleWindowImGuiActor::SetWindowTitle(const FString& InWindowTitle) {
}

void ASingleWindowImGuiActor::SetWindowAnchors(const FAnchors& InAnchors) {
}

void ASingleWindowImGuiActor::SetVisibility(bool InIsVisible) {
}

bool ASingleWindowImGuiActor::IsVisible() const {
    return false;
}


void ASingleWindowImGuiActor::ImGuiTick() {
}


