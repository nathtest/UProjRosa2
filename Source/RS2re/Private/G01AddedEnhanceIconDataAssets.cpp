#include "G01AddedEnhanceIconDataAssets.h"

UG01AddedEnhanceIconDataAssets::UG01AddedEnhanceIconDataAssets() {
}

UTexture2D* UG01AddedEnhanceIconDataAssets::LoadIconTexture(EG01AddedPotentEnhanceTypeEnum Type, bool IsDown) {
    return NULL;
}

FText UG01AddedEnhanceIconDataAssets::GetText(EG01AddedPotentEnhanceTypeEnum Type) {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UG01AddedEnhanceIconDataAssets::GetIconTexture(EG01AddedPotentEnhanceTypeEnum Type, bool IsDown) {
    return NULL;
}

TArray<TSoftObjectPtr<UTexture2D>> UG01AddedEnhanceIconDataAssets::GetAllIconTexture() {
    return TArray<TSoftObjectPtr<UTexture2D>>();
}


