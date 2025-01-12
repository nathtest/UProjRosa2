#include "AppTextBlock.h"
#include "TextWrapper.h"

UAppTextBlock::UAppTextBlock() {
    this->bIsLinkLanguageFont = true;
    this->MIsTextOverAdjust = false;
    this->MMaxAdjustSize = 300.00f;
    this->MMinAdjustScale = 0.00f;
    this->MIsProhibitionConvertUse = false;
    this->MIsScreenChangeAutoWrapUse = true;
    this->TextWrapper = CreateDefaultSubobject<UTextWrapper>(TEXT("TextWrapper"));
    this->bIsUseManualPixelSize = false;
    this->MIsFastTextUpdate = false;
    this->MProhibitionWrapTextAt = 0.00f;
    this->MIsExceptUpdate = true;
    this->MostParentUserWidget = NULL;
}

void UAppTextBlock::SetTextId(FName InTextID) {
}

void UAppTextBlock::RecalculateMaxPixel() {
}


bool UAppTextBlock::IsInViewport() const {
    return false;
}

FVector2D UAppTextBlock::GetTextSize(const FString& inString) {
    return FVector2D{};
}

FText UAppTextBlock::GetOriginalText() const {
    return FText::GetEmpty();
}

FVector2D UAppTextBlock::GetMaxSize() {
    return FVector2D{};
}

void UAppTextBlock::EnableExceptUpdate() {
}


