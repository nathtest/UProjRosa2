#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01ExpDataTableRowArtsLevelStruct.h"
#include "G01ExpDataTableComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ExpDataTableComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MExpDataTableHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MExpDataTableBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MExpDataTableArtsLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MExpDataTableMasterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MExpDataTableEnemy;
    
public:
    UG01ExpDataTableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GetNeedTotalExpByArtsLevelList(const bool InFulfillNextLevel, TArray<FG01ExpDataTableRowArtsLevelStruct>& OutNeedTotalExpList);
    
    UFUNCTION(BlueprintCallable)
    void GetNeedTotalExpByArtsLevel(const int32 InArtsLevel, const bool InFulfillNextLevel, int32& OutExp);
    
    UFUNCTION(BlueprintCallable)
    void GetNeedExpByMasterLevel(int32 InCurrentMasterLevel, int32& OutNeedExp);
    
    UFUNCTION(BlueprintCallable)
    void GetNeedExpByHp(int32 InCurrentHp, int32& OutNeedExp);
    
    UFUNCTION(BlueprintCallable)
    void GetNeedExpByBp(int32 InCurrentBp, int32& OutNeedExp);
    
    UFUNCTION(BlueprintCallable)
    void GetNeedExpByArtsLevel(int32 InCurrentArtsLevel, int32& OutNeedExp);
    
    UFUNCTION(BlueprintCallable)
    void GetMaxMasterLevel(int32& OutMaxMasterLevel);
    
    UFUNCTION(BlueprintCallable)
    void GetMaxHP(int32& OutMaxHP);
    
    UFUNCTION(BlueprintCallable)
    void GetMaxBP(int32& OutMaxBP);
    
    UFUNCTION(BlueprintCallable)
    void GetMaxArtsLevel(int32& OutMaxLevel);
    
    UFUNCTION(BlueprintCallable)
    float GetHPGrowthCoefficient(const int32& InBaseHp);
    
    UFUNCTION(BlueprintCallable)
    void GetEnemyExp(FName InEnemyID, int32& OutExp);
    
    UFUNCTION(BlueprintCallable)
    float GetBPGrowthCoefficient(const int32& InBaseBp);
    
    UFUNCTION(BlueprintCallable)
    void GetAllEnemyID(TArray<FName>& OutAllEnemyIDList);
    
    UFUNCTION(BlueprintCallable)
    void CheckGrowthByMasterLevel(int32 InCurrentMasterLevel, bool& OutOk);
    
    UFUNCTION(BlueprintCallable)
    void CheckGrowthByHp(int32 InCurrentHp, bool& OutOk);
    
    UFUNCTION(BlueprintCallable)
    void CheckGrowthByBp(int32 InCurrentBp, bool& OutOk);
    
    UFUNCTION(BlueprintCallable)
    void CheckGrowthByArtsLevel(int32 InCurrentArtsLevel, bool& OutOk);
    
    UFUNCTION(BlueprintCallable)
    void CalcArtsLevel(const int32& InExp, int32& OutArtsLevel);
    
};

