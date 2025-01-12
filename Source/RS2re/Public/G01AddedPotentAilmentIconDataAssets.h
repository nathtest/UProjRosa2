#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01AddedPotentAilmentIconDataAssets.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class RS2RE_API UG01AddedPotentAilmentIconDataAssets : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> TableList;
    
    UG01AddedPotentAilmentIconDataAssets();

    UFUNCTION(BlueprintCallable)
    UTexture2D* LoadIconTexture(FG01AddedPotentBaseKeyStruct BaseKey);
    
    UFUNCTION(BlueprintCallable)
    FText GetText(FG01AddedPotentBaseKeyStruct BaseKey);
    
    UFUNCTION(BlueprintCallable)
    FText GetSabotageText(FG01AddedPotentBaseKeyStruct BaseKey);
    
    UFUNCTION(BlueprintCallable)
    FText GetSabotageByFaintText(FG01AddedPotentBaseKeyStruct BaseKey);
    
    UFUNCTION(BlueprintCallable)
    FText GetInvalidText(FG01AddedPotentBaseKeyStruct BaseKey);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetIconTexture(FG01AddedPotentBaseKeyStruct BaseKey);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftObjectPtr<UTexture2D>> GetAllIconTexture();
    
};

