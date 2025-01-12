#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EKeyConfigBindSlotType.h"
#include "EKeyConfigType.h"
#include "KeyConfigAssignData.h"
#include "KeyConfigAssignTableRow.h"
#include "KeyConfigOperationCategory.h"
#include "KeyConfigOperationCategorySettings.h"
#include "KeyConfigUnassignableKeys.h"
#include "KeyConfigPreset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UKeyConfigPreset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssignDataInitOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeyConfigType KeyConfigType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKeyConfigBindSlotType> SlotTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* KeyConfigTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyConfigUnassignableKeys UnassignableKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyConfigOperationCategorySettings DefaultCategorySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKeyConfigOperationCategory, FKeyConfigOperationCategorySettings> CategorySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyConfigAssignData DefaultAssignData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKeyConfigAssignData RuntimeAssignData;
    
public:
    UKeyConfigPreset();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDefaultKeyMappings();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxBindNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FindCategorySettings(const FKeyConfigOperationCategory& InCategory, FKeyConfigOperationCategorySettings& OutCategorySettings) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FindAssignData(bool& OutIsFound, FKeyConfigAssignTableRow& OutRow, const FName& InAssignID, bool InIsCheckDependence) const;
    
};

