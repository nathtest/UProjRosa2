#include "G01PlatformFuncLib.h"

UG01PlatformFuncLib::UG01PlatformFuncLib() {
}

bool UG01PlatformFuncLib::IsSteamDeck(const UObject* InWorldContext) {
    return false;
}

void UG01PlatformFuncLib::GetStoreProductInfo(FString& OutProductId) {
}

void UG01PlatformFuncLib::GetProductInfo(bool InIsTrial, bool InIsBackward, FString& OutTitleId, FString& OutFingerprint) {
}

void UG01PlatformFuncLib::GetDLCInfo(const int32 InDLCIndex, FString& OutDLCName) {
}


