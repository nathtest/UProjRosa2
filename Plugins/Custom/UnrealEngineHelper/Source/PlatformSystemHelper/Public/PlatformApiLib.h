#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PlatformApiLib.generated.h"

UCLASS(Blueprintable)
class PLATFORMSYSTEMHELPER_API UPlatformApiLib : public UObject {
    GENERATED_BODY()
public:
    UPlatformApiLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSystemUiOverlaid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPS4NeoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNoticeScreenSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialInstallComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistDLC(const FString& InDLCName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChunkPending();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSystemLanguage();
    
};

