#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01OptionOverrideDataByLangCode.h"
#include "G01OptionRegionOverrideSettings.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01OptionRegionOverrideSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetLanguageCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01OptionOverrideDataByLangCode> OverrideData;
    
    UG01OptionRegionOverrideSettings();

    UFUNCTION(BlueprintCallable)
    void UpdateProperty();
    
};

