#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01AddedPotentExtarnalIconDataAssets.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class RS2RE_API UG01AddedPotentExtarnalIconDataAssets : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> TableList;
    
    UG01AddedPotentExtarnalIconDataAssets();

    UFUNCTION(BlueprintCallable)
    UTexture2D* LoadIconTexture(FG01AddedPotentBaseKeyStruct Key);
    
    UFUNCTION(BlueprintCallable)
    FText GetText(FG01AddedPotentBaseKeyStruct Key);
    
    UFUNCTION(BlueprintCallable)
    FText GetSabotageByFaintText(FG01AddedPotentBaseKeyStruct Key);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetIconTexture(FG01AddedPotentBaseKeyStruct Key);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftObjectPtr<UTexture2D>> GetAllIconTexture();
    
    UFUNCTION(BlueprintCallable)
    bool CheckUseRedChar(FG01AddedPotentBaseKeyStruct Key);
    
    UFUNCTION(BlueprintCallable)
    bool CheckHiddenStatusHUD(FG01AddedPotentBaseKeyStruct Key);
    
    UFUNCTION(BlueprintCallable)
    bool CheckHiddenPopupHUD(FG01AddedPotentBaseKeyStruct Key);
    
};

