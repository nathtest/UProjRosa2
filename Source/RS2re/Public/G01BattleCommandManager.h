#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01BattleCommandManagerInf.h"
#include "G01BattleCommandTarget.h"
#include "G01BattleCommandUnit.h"
#include "G01BtCommandUiContUserInf.h"
#include "G01CharacterID.h"
#include "G01BattleCommandManager.generated.h"

class AActor;
class UCapsuleComponent;
class UG01AttackAreaEffectComponent;
class UG01BattleArtsManagerAccessor;
class UG01BattleCommandSettingDataAsset;
class UG01BattleExplicitCommandMemento;
class UG01BattleManagerAccessor;
class UG01PartyManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleCommandManager : public AManagerBase, public IG01BattleCommandManagerInf, public IG01BtCommandUiContUserInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleManagerAccessor* MBattleManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleArtsManagerAccessor* MBattleArtsManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01PartyManagerAccessor* PartyManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* MTargetCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleCommandSettingDataAsset* MCommandSetting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UG01AttackAreaEffectComponent*> AttackAreaEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleCommandUnit> MCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCommandIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FG01BattleCommandTarget> MTargetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FG01BattleCommandTarget> TargetMapForOtherTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FG01BattleCommandTarget> TargetMapForAllyTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FG01BattleCommandTarget> TargetMapForMyself;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MCurrentCommandCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleCommandUnit> MNextCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, int32> MCurrentFluctureSpeedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, int32> MNextFluctureSpeedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FG01CharacterID, UG01BattleExplicitCommandMemento*> ExplicitCommandMemento;
    
public:
    AG01BattleCommandManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SortByFaster(UPARAM(Ref) TArray<FG01BattleCommandUnit>& InCommandList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PredicateSortByFaster(const FG01BattleCommandUnit& InA, const FG01BattleCommandUnit& InB, bool& ReAIsFaster);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAcceptConfuse();
    

    // Fix for true pure virtual functions not being implemented
};

