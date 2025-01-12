#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01BattleCommandSettingDataAsset.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01BattleCommandSettingDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartyCommandSpeedFluctureMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartyCommandSpeedFluctureMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyCommandSpeedFluctureMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyCommandSpeedFluctureMax;
    
    UG01BattleCommandSettingDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartyCommandSpeedFlucture(int32& OutMin, int32& OutMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEnemyCommandSpeedFlucture(int32& OutMin, int32& OutMax);
    
};

