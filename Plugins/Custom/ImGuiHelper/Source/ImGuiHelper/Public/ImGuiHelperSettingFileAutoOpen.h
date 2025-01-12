#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "AutoOpenInfo.h"
#include "ImGuiHelperSettingFileBase.h"
#include "ImGuiHelperSettingFileAutoOpen.generated.h"

class UObject;

UCLASS(Blueprintable)
class IMGUIHELPER_API UImGuiHelperSettingFileAutoOpen : public UImGuiHelperSettingFileBase {
    GENERATED_BODY()
public:
    UImGuiHelperSettingFileAutoOpen();

    UFUNCTION(BlueprintCallable)
    void SetAutoOpenByPathName(const FString& pathName, const FName& ClassName, bool isAutoOpen, bool IsMinimal, const FVector2D& Pos, const FVector2D& Size);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoOpenByObject(const UObject* Object, bool isAutoOpen, bool IsMinimal, const FVector2D& Pos, const FVector2D& Size);
    
    UFUNCTION(BlueprintCallable)
    TArray<FAutoOpenInfo> GetAllAutoOpen();
    
    UFUNCTION(BlueprintCallable)
    bool CheckAutoOpenByPathName(const FString& pathName, const FName& ClassName);
    
    UFUNCTION(BlueprintCallable)
    bool CheckAutoOpenByObject(const UObject* Object);
    
};

