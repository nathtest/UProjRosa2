#include "ImGuiHelperSettingFileAutoOpen.h"

UImGuiHelperSettingFileAutoOpen::UImGuiHelperSettingFileAutoOpen() {
}

void UImGuiHelperSettingFileAutoOpen::SetAutoOpenByPathName(const FString& pathName, const FName& ClassName, bool isAutoOpen, bool IsMinimal, const FVector2D& Pos, const FVector2D& Size) {
}

void UImGuiHelperSettingFileAutoOpen::SetAutoOpenByObject(const UObject* Object, bool isAutoOpen, bool IsMinimal, const FVector2D& Pos, const FVector2D& Size) {
}

TArray<FAutoOpenInfo> UImGuiHelperSettingFileAutoOpen::GetAllAutoOpen() {
    return TArray<FAutoOpenInfo>();
}

bool UImGuiHelperSettingFileAutoOpen::CheckAutoOpenByPathName(const FString& pathName, const FName& ClassName) {
    return false;
}

bool UImGuiHelperSettingFileAutoOpen::CheckAutoOpenByObject(const UObject* Object) {
    return false;
}


