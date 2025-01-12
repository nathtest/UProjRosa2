#include "GetAssetDataFunctionLibrary.h"

UGetAssetDataFunctionLibrary::UGetAssetDataFunctionLibrary() {
}

UClass* UGetAssetDataFunctionLibrary::GetAssetGeneratedClass(const FAssetData& InAssetData) {
    return NULL;
}

TSoftObjectPtr<ULevelSequence> UGetAssetDataFunctionLibrary::Func_StringToSoftObjectPtrLevelSequence(const FString& InPath) {
    return NULL;
}

TSoftClassPtr<AQuestObjectBase> UGetAssetDataFunctionLibrary::Func_StringToSoftClassPtrQuest(const FString& InPath) {
    return NULL;
}


