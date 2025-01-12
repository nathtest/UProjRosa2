#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "KeyConfigOperationCategory.h"
#include "KeyConfigOperationCategoryTableRow.h"
#include "KeyConfigSettings.generated.h"

class UDataTable;
class UKeyConfigPreset;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UKeyConfigSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UKeyConfigPreset*> UseKeyConfigPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CategoryTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnsupportedTextShowTime;
    
public:
    UKeyConfigSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UKeyConfigPreset*> GetUseKeyConfigPresets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FindCategoryData(FKeyConfigOperationCategory InCategory, bool& OutIsFound, FKeyConfigOperationCategoryTableRow& OutRow) const;
    
};

