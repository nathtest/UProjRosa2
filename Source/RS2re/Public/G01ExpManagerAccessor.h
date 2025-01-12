#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EG01BattleArtsType.h"
#include "G01CharacterID.h"
#include "G01ExpActionLogStruct.h"
#include "G01ExpManagerAccessor.generated.h"

class UG01ExpDataTableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ExpManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01ExpManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UsedArts(FG01CharacterID InCharacterId, EG01BattleArtsType InUsedArtsType);
    
    UFUNCTION(BlueprintCallable)
    void ThrowExp();
    
    UFUNCTION(BlueprintCallable)
    void SetUseDevelopmentBonus(bool InUse);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialBonus(float InBonus);
    
    UFUNCTION(BlueprintCallable)
    void SetExceptionBonus(float InBonus);
    
    UFUNCTION(BlueprintCallable)
    void SetDevelopmentBonus(float InBonus);
    
    UFUNCTION(BlueprintCallable)
    void SetBonus(float InBonus);
    
    UFUNCTION(BlueprintCallable)
    void SetActionLog(const TArray<FG01ExpActionLogStruct>& InCharacterLog);
    
    UFUNCTION(BlueprintCallable)
    void ResolveExp();
    
    UFUNCTION(BlueprintCallable)
    void GetUseDevelopmentBonus(bool& OutUse);
    
    UFUNCTION(BlueprintCallable)
    void GetSpecialBonus(float& OutBonus);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNeedTotalExpByArtsLevel(const int32 InArtsLevel, const bool InFulfillNextLevel);
    
    UFUNCTION(BlueprintCallable)
    void GetNeedExpByArtsLevel(const int32 InCurrentArtsLevel, int32& OutNeedExp);
    
    UFUNCTION(BlueprintCallable)
    float GetHPGrowthCoefficient(const int32& InBaseHp);
    
    UFUNCTION(BlueprintCallable)
    UG01ExpDataTableComponent* GetExpDataTable();
    
    UFUNCTION(BlueprintCallable)
    void GetExp(bool InUseBonus, bool InUseSpecialBonus, bool InUseExceptionBonus, bool InUseDevelopmentBonus, int32& OutExp);
    
    UFUNCTION(BlueprintCallable)
    void GetExceptionBonus(float& OutBonus);
    
    UFUNCTION(BlueprintCallable)
    void GetDevelopmentBonus(float& OutBonus);
    
    UFUNCTION(BlueprintCallable)
    float GetBPGrowthCoefficient(const int32& InBaseBp);
    
    UFUNCTION(BlueprintCallable)
    void GetBonus(float& OutBonus);
    
    UFUNCTION(BlueprintCallable)
    void GetActionLog(TArray<FG01ExpActionLogStruct>& OutCharacterLog);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcArtsLevel(const int32& InExp);
    
    UFUNCTION(BlueprintCallable)
    void AddExp(int32 InExp);
    
};

