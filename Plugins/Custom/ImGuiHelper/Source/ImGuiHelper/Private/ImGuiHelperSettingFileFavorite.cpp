#include "ImGuiHelperSettingFileFavorite.h"

UImGuiHelperSettingFileFavorite::UImGuiHelperSettingFileFavorite() {
}

void UImGuiHelperSettingFileFavorite::SetFavoriteByPathName(const FString& pathName, const FName& ClassName, bool IsFavorite) {
}

void UImGuiHelperSettingFileFavorite::SetFavoriteByObject(const UObject* Object, bool IsFavorite) {
}

TArray<FFavoriteInfo> UImGuiHelperSettingFileFavorite::GetAllFavorite() {
    return TArray<FFavoriteInfo>();
}

bool UImGuiHelperSettingFileFavorite::CheckFavoriteByPathName(const FString& pathName, const FName& ClassName) {
    return false;
}

bool UImGuiHelperSettingFileFavorite::CheckFavoriteByObject(const UObject* Object) {
    return false;
}


