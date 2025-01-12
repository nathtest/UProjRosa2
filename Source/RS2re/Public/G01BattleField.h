#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "AppActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppActor -FallbackName=AppActor
#include "EG01MapAspectType.h"
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01BattleFieldID.h"
#include "G01BattleFieldParamTableRow.h"
#include "G01BattlePartyFormationTableRow.h"
#include "G01EnvPresetDataAssetID.h"
#include "G01MapAspectFlowKeyStruct.h"
#include "Templates/SubclassOf.h"
#include "G01BattleField.generated.h"

class AActor;
class AG01BattleFormation;
class AG01FormationPoint;
class AG01MapAspectEffectContainer;
class UBoxComponent;
class UG01BattleManagerAccessor;
class URoomInfoComponent;
class USceneComponent;
class UWorld;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleField : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01EnvPresetDataAssetID OverrideEnvPresetDataAssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> HideBgModelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ShowBgModelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> HideSubLevelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> ShowSubLevelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MBattleFieldId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleFieldID BattleFieldId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMapAspectEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01AddedPotentBaseKeyStruct> AddedPotentForParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01AddedPotentBaseKeyStruct> AddedPotentForEnemy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AG01MapAspectEffectContainer> MMapAspectEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleManagerAccessor* BattleManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URoomInfoComponent* RoomInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MapAspectFlowKeyStruct InitialMapAspectFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HiddenBgActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ShowedBgActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, AG01BattleFormation*> FormationMap;
    
public:
    AG01BattleField(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowBgModel();
    
    UFUNCTION(BlueprintCallable)
    void SettingPartyFormationData(const TArray<FG01BattlePartyFormationTableRow>& InMainFormationList, const TArray<FG01BattlePartyFormationTableRow>& InSubFormationList, const TArray<FG01BattlePartyFormationTableRow>& InBreakFormationList, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SettingEnemyFormationData(TSubclassOf<AG01BattleFormation> InFormationClass, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SetTableParam(const FG01BattleFieldParamTableRow& InParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPartyTeamDirection(const FTransform& InTransform);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPartyDownCount(int32 InDefeatCount);
    
    UFUNCTION(BlueprintCallable)
    void SetMapAspectFxVisibility(bool Invisible);
    
    UFUNCTION(BlueprintCallable)
    void SetMapAspectEffect(EG01MapAspectType InMapAspect);
    
    UFUNCTION(BlueprintCallable)
    void SetFormationFxVisibility(bool Invisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetEnemyTeamDirection(const FTransform& InTransform);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBreakPartyFormation(bool InIsBreak);
    
    UFUNCTION(BlueprintCallable)
    void SelectPartyFormation(bool InToMain);
    
    UFUNCTION(BlueprintCallable)
    void PrepareMapAspectEffect(EG01MapAspectType InMapAspectType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowModelRevert(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowModelApply(AActor* InActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRelocateBattleField();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideModelRevert(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideModelApply(AActor* InActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChangeAlivePartyList(const TArray<AActor*>& InActorList);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeAliveEnemyList(const TArray<AActor*>& InActorList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsBreakedPartyFormation(bool& ReIsBreaked);
    
    UFUNCTION(BlueprintCallable)
    void InitializeForEscape();
    
    UFUNCTION(BlueprintCallable)
    void InitializeForBattle();
    
    UFUNCTION(BlueprintCallable)
    void HideBgModel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartyTeamDirection(FTransform& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetPartyTargetEffectArea(UBoxComponent*& OutBox);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartyMainFormationData(FG01BattlePartyFormationTableRow& Re);
    
    UFUNCTION(BlueprintCallable)
    void GetPartyFormationPointList(TArray<AG01FormationPoint*>& ReFormationList);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetPartyFormationPivot(USceneComponent*& Re);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartyFormationData(FG01BattlePartyFormationTableRow& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartyFormation(AG01BattleFormation*& ReFormation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIsShipBattle(bool& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInitialMapAspectFlow(FG01MapAspectFlowKeyStruct& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetEscapeOrigin(AActor*& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEnemyTeamDirection(FTransform& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetEnemyTargetEffectArea(UBoxComponent*& OutBox);
    
    UFUNCTION(BlueprintCallable)
    void GetEnemyFormationPointList(TArray<AG01FormationPoint*>& ReFormationList);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetEnemyFormationPivot(USceneComponent*& Re);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEnemyFormation(AG01BattleFormation*& ReFormation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattleFieldId(FName& Re);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

