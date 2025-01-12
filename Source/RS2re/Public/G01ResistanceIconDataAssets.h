#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EG01BattleArtsAttribute.h"
#include "G01ResistanceIconDataAssets.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class RS2RE_API UG01ResistanceIconDataAssets : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> TableList;
    
    UG01ResistanceIconDataAssets();

    UFUNCTION(BlueprintCallable)
    UTexture2D* LoadIconTexture(EG01BattleArtsAttribute Type);
    
    UFUNCTION(BlueprintCallable)
    FName GetTextID(EG01BattleArtsAttribute Type);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetIconTexture(EG01BattleArtsAttribute Type);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftObjectPtr<UTexture2D>> GetAllIconTexture();
    
};

