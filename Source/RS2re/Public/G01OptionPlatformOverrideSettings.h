#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EPlatformType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EPlatformType -FallbackName=EPlatformType
#include "G01OptionPlatformOverrideSettings.generated.h"

class UG01OptionRegionOverrideSettings;

UCLASS(Blueprintable)
class RS2RE_API UG01OptionPlatformOverrideSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlatformType, UG01OptionRegionOverrideSettings*> OverrideSettingsByPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetLanguageCodes;
    
    UG01OptionPlatformOverrideSettings();

    UFUNCTION(BlueprintCallable)
    void UpdateProperty();
    
};

