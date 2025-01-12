#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "G01DebugSettingCSVKeyStruct.h"
#include "Templates/SubclassOf.h"
#include "DebugSettingFileSubsystem.generated.h"

class UG01DebugVariableBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UDebugSettingFileSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UDebugSettingFileSubsystem();

    UFUNCTION(BlueprintCallable)
    void Setup(const FString& InMyDefaultSettingFileName, const FString& InSettingPath);
    
    UFUNCTION(BlueprintCallable)
    void SetSettingValue(FG01DebugSettingCSVKeyStruct InKey, const FString& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SaveSettingFile(const FString& InFilename);
    
    UFUNCTION(BlueprintCallable)
    void RestoreLoadSettingFilePath();
    
    UFUNCTION(BlueprintCallable)
    void LoadSettingFile(const FString& InFilename);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSettingValueInt(FG01DebugSettingCSVKeyStruct InKey, bool& OutExist);
    
    UFUNCTION(BlueprintCallable)
    float GetSettingValueFloat(FG01DebugSettingCSVKeyStruct InKey, bool& OutExist);
    
    UFUNCTION(BlueprintCallable)
    bool GetSettingValueBool(FG01DebugSettingCSVKeyStruct InKey, bool& OutExist);
    
    UFUNCTION(BlueprintCallable)
    FString GetSettingValue(FG01DebugSettingCSVKeyStruct InKey, bool& OutExist);
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentSettingFileName();
    
    UFUNCTION(BlueprintCallable)
    TMap<FG01DebugSettingCSVKeyStruct, FString> GetAllSettingValue();
    
    UFUNCTION(BlueprintCallable)
    void GetAllSettingFileName(TArray<FString>& OutAllName);
    
    UFUNCTION(BlueprintCallable)
    UG01DebugVariableBase* CreateVariable(TSubclassOf<UG01DebugVariableBase> InClassType, FG01DebugSettingCSVKeyStruct InKey);
    
    UFUNCTION(BlueprintCallable)
    void CreateSettingFile(const FString& InFilename);
    
};

