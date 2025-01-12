#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01BattleArtsType.h"
#include "G01CharacterID.h"
#include "G01ExpGrowthObserveStruct.h"
#include "G01ExpGrowthObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ExpGrowthObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01ExpGrowthObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpGrowth_MasterLevelGrowthBefore(const FG01CharacterID& InCharacterId, const FG01ExpGrowthObserveStruct& InGrowth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpGrowth_MasterLevelGrowthAfter(const FG01CharacterID& InCharacterId, const FG01ExpGrowthObserveStruct& InGrowth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpGrowth_MasterLevelGrowth(const FG01CharacterID& InCharacterId, const FG01ExpGrowthObserveStruct& InGrowth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpGrowth_HPGrowthBefore(const FG01CharacterID& InCharacterId, const FG01ExpGrowthObserveStruct& InGrowth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpGrowth_HPGrowthAfter(const FG01CharacterID& InCharacterId, const FG01ExpGrowthObserveStruct& InGrowth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpGrowth_HPGrowth(const FG01CharacterID& InCharacterId, const FG01ExpGrowthObserveStruct& InGrowth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpGrowth_DebugHPGrowthFormula(const FString& InFormula);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpGrowth_DebugBPGrowthFormula(const FString& InFormula);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpGrowth_BPGrowthBefore(const FG01CharacterID& InCharacterId, const FG01ExpGrowthObserveStruct& InGrowth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpGrowth_BPGrowthAfter(const FG01CharacterID& InCharacterId, const FG01ExpGrowthObserveStruct& InGrowth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpGrowth_BPGrowth(const FG01CharacterID& InCharacterId, const FG01ExpGrowthObserveStruct& InGrowth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpGrowth_ArtsGrowthBefore(const FG01CharacterID& InCharacterId, const EG01BattleArtsType& InArtsType, const FG01ExpGrowthObserveStruct& InGrowth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpGrowth_ArtsGrowthAfter(const FG01CharacterID& InCharacterId, const EG01BattleArtsType& InArtsType, const FG01ExpGrowthObserveStruct& InGrowth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpGrowth_ArtsGrowth(const FG01CharacterID& InCharacterId, const EG01BattleArtsType& InArtsType, const FG01ExpGrowthObserveStruct& InGrowth);
    
};

