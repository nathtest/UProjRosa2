#include "AppRichTextWidget.h"
#include "RichTextWrapper.h"

UAppRichTextWidget::UAppRichTextWidget() {
    this->TextWrapper = CreateDefaultSubobject<URichTextWrapper>(TEXT("TextWrapper"));
    this->bIsEnableJustification = false;
    this->bIsEnableTextDivide = true;
    this->bIsUpdateInTheViewportOnly = false;
    this->bIsUseMaxAreaFromInit = true;
    this->CharDisplayInterval = 0.00f;
    this->InvalidationBox = NULL;
    this->Container = NULL;
    this->DisplayDelayTime = 0.00f;
    this->DisplayingLineIndex = -1;
    this->DisplayingElemIndex = -1;
    this->DisplayingPartIndex = -1;
}

void UAppRichTextWidget::SkipRichText() {
}

void UAppRichTextWidget::SetText(FText InText) {
}

void UAppRichTextWidget::RecalculateMaxPixel() {
}

bool UAppRichTextWidget::IsRichTextPlaying() const {
    return false;
}

bool UAppRichTextWidget::IsEnableTextDivide() const {
    return false;
}

bool UAppRichTextWidget::IsEnableJustification() const {
    return false;
}

FText UAppRichTextWidget::GetText() const {
    return FText::GetEmpty();
}

FVector2D UAppRichTextWidget::GetMaxPixel() const {
    return FVector2D{};
}


