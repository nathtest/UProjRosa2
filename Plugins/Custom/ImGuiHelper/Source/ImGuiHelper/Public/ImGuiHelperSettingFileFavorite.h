#pragma once
#include "CoreMinimal.h"
#include "FavoriteInfo.h"
#include "ImGuiHelperSettingFileBase.h"
#include "ImGuiHelperSettingFileFavorite.generated.h"

class UObject;

UCLASS(Blueprintable)
class IMGUIHELPER_API UImGuiHelperSettingFileFavorite : public UImGuiHelperSettingFileBase {
    GENERATED_BODY()
public:
    UImGuiHelperSettingFileFavorite();

    UFUNCTION(BlueprintCallable)
    void SetFavoriteByPathName(const FString& pathName, const FName& ClassName, bool IsFavorite);
    
    UFUNCTION(BlueprintCallable)
    void SetFavoriteByObject(const UObject* Object, bool IsFavorite);
    
    UFUNCTION(BlueprintCallable)
    TArray<FFavoriteInfo> GetAllFavorite();
    
    UFUNCTION(BlueprintCallable)
    bool CheckFavoriteByPathName(const FString& pathName, const FName& ClassName);
    
    UFUNCTION(BlueprintCallable)
    bool CheckFavoriteByObject(const UObject* Object);
    
};

