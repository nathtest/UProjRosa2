#include "EngineHelperFuncLib.h"

UEngineHelperFuncLib::UEngineHelperFuncLib() {
}

TSoftObjectPtr<UObject> UEngineHelperFuncLib::Func_StringToSoftObjectPtr(const FString& InStr) {
    return NULL;
}

FSoftObjectPath UEngineHelperFuncLib::Func_StringToSoftObjectPath(const FString& InStr) {
    return FSoftObjectPath{};
}

TSoftClassPtr<UObject> UEngineHelperFuncLib::Func_StringToSoftClassPtr(const FString& InStr) {
    return NULL;
}

TSoftClassPtr<UObject> UEngineHelperFuncLib::Func_SoftObjectPtrToSoftClassPtr(const TSoftObjectPtr<UObject> InSoftObjectPtr) {
    return NULL;
}

bool UEngineHelperFuncLib::Func_IsStatEnabled(const UObject* InWorldContext, const FString& InStatName) {
    return false;
}

void UEngineHelperFuncLib::Func_CallUpdateCameraManager(const UObject* InWorldContext, int32 InPlayerIndex, float InDeltaTime) {
}


