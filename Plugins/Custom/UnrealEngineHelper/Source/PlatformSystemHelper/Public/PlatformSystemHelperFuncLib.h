#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PlatformSystemHelperFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class PLATFORMSYSTEMHELPER_API UPlatformSystemHelperFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlatformSystemHelperFuncLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowStoreUI(const UObject* WorldContextObject, const FString& InTitleId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSystemUiOverlaid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNoticeScreenSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInitialInstallComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChunkPending();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSystemLanguage();
    
};

