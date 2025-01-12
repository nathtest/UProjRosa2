#pragma once
#include "CoreMinimal.h"
#include "SaveDataUserSubsystemBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataUserSubsystemBase -FallbackName=SaveDataUserSubsystemBase
#include "EG01BattleArtsType.h"
#include "G01ImperialPowerSaveDataStruct.h"
#include "G01MenuSortSaveDataStruct.h"
#include "G01MenuDataSubSystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01MenuDataSubSystem : public USaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BattleSealedRequestedFlag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MenuSortSaveDataStruct MenuSortIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MenuSortSaveDataStruct ShopSortIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01BattleArtsType, int32> PreviewMasterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ImperialPowerSaveDataStruct ImperialPowerData;
    
public:
    UG01MenuDataSubSystem();

    UFUNCTION(BlueprintCallable)
    void SetShopSortIndexData(const FG01MenuSortSaveDataStruct InSortIndexData);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviewMasterLevelData(const TMap<EG01BattleArtsType, int32> InPreviewMasterLevelData);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuSortIndexData(const FG01MenuSortSaveDataStruct InSortIndexData);
    
    UFUNCTION(BlueprintCallable)
    void SetImperialPowerData(const FG01ImperialPowerSaveDataStruct InImperialPowerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01MenuSortSaveDataStruct GetShopSortIndexData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EG01BattleArtsType, int32> GetPreviewMasterLevelData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01MenuSortSaveDataStruct GetMenuSortIndexData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01ImperialPowerSaveDataStruct GetImperialPowerData() const;
    
};

