#include "PlatformSystemHelperFuncLib.h"

UPlatformSystemHelperFuncLib::UPlatformSystemHelperFuncLib() {
}

void UPlatformSystemHelperFuncLib::ShowStoreUI(const UObject* WorldContextObject, const FString& InTitleId) {
}

bool UPlatformSystemHelperFuncLib::IsSystemUiOverlaid() {
    return false;
}

bool UPlatformSystemHelperFuncLib::IsNoticeScreenSkip() {
    return false;
}

bool UPlatformSystemHelperFuncLib::IsInitialInstallComplete() {
    return false;
}

bool UPlatformSystemHelperFuncLib::IsChunkPending() {
    return false;
}

FString UPlatformSystemHelperFuncLib::GetSystemLanguage() {
    return TEXT("");
}


