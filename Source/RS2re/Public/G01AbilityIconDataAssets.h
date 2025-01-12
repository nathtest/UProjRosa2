#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01AbilityIconDataAssets.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class RS2RE_API UG01AbilityIconDataAssets : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MenuIconTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BattleIconTable;
    
    UG01AbilityIconDataAssets();

    UFUNCTION(BlueprintCallable)
    UTexture2D* LoadMenuIconTexture(FName InRowName);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* LoadBattleIconTexture(FName InRowName);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetMenuIconTexture(FName InRowName);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetBattleIconTexture(FName InRowName);
    
};

