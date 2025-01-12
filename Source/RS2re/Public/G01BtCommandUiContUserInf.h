#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EBattleCommandActionType.h"
#include "EBattleCommandMode.h"
#include "EBattleCommandPhaseType.h"
#include "G01BtCommandUiArtsData.h"
#include "G01BtCommandUiContUserInf.generated.h"

class AActor;
class AAppActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BtCommandUiContUserInf : public UInterface {
    GENERATED_BODY()
};

class IG01BtCommandUiContUserInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtCommandUiContUser_Target(AActor* InMainTarget, const TArray<AActor*>& InSubTargetList, bool InIsAll, bool InIsRandom, bool InIsOutOfRange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtCommandUiContUser_SettingPreSelectActionId(FName InActionId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtCommandUiContUser_SelectActionCharacter(AAppActor* InActionCharcter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtCommandUiContUser_PhaseStart(EBattleCommandPhaseType InPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtCommandUiContUser_PhaseEnd(EBattleCommandPhaseType InPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtCommandUiContUser_OnSettingPreSelectActionData(FG01BtCommandUiArtsData InArtsData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtCommandUiContUser_OnModeChange(EBattleCommandMode InMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtCommandUiContUser_ChangeWeapon(FName InWeaponId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtCommandUiContUser_ChangeActionType(EBattleCommandActionType InActionType);
    
};

