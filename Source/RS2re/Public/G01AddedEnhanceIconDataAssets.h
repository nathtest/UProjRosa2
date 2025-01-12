#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EG01AddedPotentEnhanceTypeEnum.h"
#include "G01AddedEnhanceIconDataAssets.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class RS2RE_API UG01AddedEnhanceIconDataAssets : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> TableList;
    
    UG01AddedEnhanceIconDataAssets();

    UFUNCTION(BlueprintCallable)
    UTexture2D* LoadIconTexture(EG01AddedPotentEnhanceTypeEnum Type, bool IsDown);
    
    UFUNCTION(BlueprintCallable)
    FText GetText(EG01AddedPotentEnhanceTypeEnum Type);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetIconTexture(EG01AddedPotentEnhanceTypeEnum Type, bool IsDown);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftObjectPtr<UTexture2D>> GetAllIconTexture();
    
};

