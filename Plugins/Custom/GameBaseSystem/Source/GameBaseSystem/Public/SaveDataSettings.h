#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "AutoSaveParams.h"
#include "ESaveDataGroup.h"
#include "ESaveSlotCategory.h"
#include "SaveDataCategoryParams.h"
#include "SaveDataGroupParams.h"
#include "SaveDataRequestInfo.h"
#include "SaveDataSettings.generated.h"

class UWorld;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API USaveDataSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IndexFormatKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAutoSaveParams> AutoSaveParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESaveDataGroup, FSaveDataGroupParams> GroupParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESaveSlotCategory, FSaveDataCategoryParams> CategoryParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> SubsystemInitLevels;
    
    USaveDataSettings();

    UFUNCTION(BlueprintCallable)
    void RebuildProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSaveFileName(bool& OutIsSuccess, FString& OutFileName, const FSaveDataRequestInfo& InRequest) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAutoSaveParams> GetAutoSaveParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindSaveGroupData(bool& OutIsFound, FSaveDataGroupParams& OutRow, ESaveDataGroup InGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindSaveCategoryData(bool& OutIsFound, FSaveDataCategoryParams& OutRow, ESaveSlotCategory InCategory) const;
    
};

