#include "PlatformApiLib.h"

UPlatformApiLib::UPlatformApiLib() {
}

bool UPlatformApiLib::IsSystemUiOverlaid() {
    return false;
}

bool UPlatformApiLib::IsPS4NeoMode() {
    return false;
}

bool UPlatformApiLib::IsNoticeScreenSkip() {
    return false;
}

bool UPlatformApiLib::IsInitialInstallComplete() {
    return false;
}

bool UPlatformApiLib::IsExistDLC(const FString& InDLCName) {
    return false;
}

bool UPlatformApiLib::IsChunkPending() {
    return false;
}

FString UPlatformApiLib::GetSystemLanguage() {
    return TEXT("");
}


