#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01BattleCharacterIconDataAssets.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleCharacterIconDataAssets : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> TableList;
    
    UG01BattleCharacterIconDataAssets();

    UFUNCTION(BlueprintCallable)
    UTexture2D* LoadTimeLineIconTexture(FName CharacterID);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* LoadStatusHUDIconTexture(FName CharacterID);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetIconTexture(FName CharacterID);
    
};

