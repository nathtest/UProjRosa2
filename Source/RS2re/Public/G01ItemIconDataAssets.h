#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EG01ItemUsageType.h"
#include "G01ItemIconDataAssets.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class RS2RE_API UG01ItemIconDataAssets : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> TableList;
    
    UG01ItemIconDataAssets();

    UFUNCTION(BlueprintCallable)
    UTexture2D* LoadIconTexture(EG01ItemUsageType UsageType, FName ItemCategory);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetIconTexture(EG01ItemUsageType UsageType, FName ItemCategory);
    
};

