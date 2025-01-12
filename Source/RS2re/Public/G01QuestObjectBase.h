#pragma once
#include "CoreMinimal.h"
#include "EQuestBufferIndex.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EQuestBufferIndex -FallbackName=EQuestBufferIndex
#include "EditableLevelObjectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EditableLevelObjectID -FallbackName=EditableLevelObjectID
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "QuestObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestObjectBase -FallbackName=QuestObjectBase
#include "EG01BattleArtsType.h"
#include "EG01BlackSmithMenuStateEnum.h"
#include "EG01CharacterVariationType.h"
#include "EG01EmperorSuccessionType.h"
#include "EG01FriendClass.h"
#include "EG01PartyJoinType.h"
#include "EG01QCEnemyDefeatCheckSpace.h"
#include "EG01QCEnemyDefeatTargetNumType.h"
#include "EG01QStackPeriodJumpType.h"
#include "EG01RecordGenerationType.h"
#include "G01ActivityID.h"
#include "G01BlackSmithMenuIDStruct.h"
#include "G01CharaClassID.h"
#include "G01CharacterID.h"
#include "G01DestinationInfo.h"
#include "G01EnemyDefeatNotifyParam.h"
#include "G01EventPointIDStruct.h"
#include "G01EventTriggerID.h"
#include "G01ImperialForcePointIDStruct.h"
#include "G01IncomeEventIDStruct.h"
#include "G01QStackUpdateAbilityOpenLevelParam.h"
#include "G01VariationCharaIDStruct.h"
#include "G01QuestObjectBase.generated.h"

class ACharacterVisualActor;
class AG01FieldEnemyBase;
class UFlagSystemManagerAccessCompo;
class UG01AbilityManagerAccessor;
class UG01DestinationManagerAccessor;
class UG01GamePlayDataManagerAccessor;
class UG01HistoryManagerAccessor;
class UG01PeriodManagerAccessor;
class UG01QuestManagerAccessor;
class UWorld;

UCLASS(Blueprintable)
class RS2RE_API AG01QuestObjectBase : public AQuestObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01DestinationManagerAccessor* DestinationManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01AbilityManagerAccessor* AbilityManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* FlagManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01PeriodManagerAccessor* PeriodManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01HistoryManagerAccessor* HistoryManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01GamePlayDataManagerAccessor* GamePlayDataManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01QuestManagerAccessor* G01QuestManagerAccessor;
    
public:
    AG01QuestObjectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDestinationKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01DestinationInfo GetDestinationInfo() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetConditionParam_EnemyDefeat(EQuestBufferIndex InBufferIndex, bool& IsCompleted, FG01EnemyDefeatNotifyParam& OutParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_UpdateCharaVariation(FG01VariationCharaIDStruct InCharaID, EG01CharacterVariationType InType, bool InIsReset);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_UpdateAbilityOpenLevel(const FG01QStackUpdateAbilityOpenLevelParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_SetReleasePlayableClass(EG01FriendClass InPlayableClass);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_SetReleaseFriendClass(EG01FriendClass InFriendClass);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_RestoreParty(int32 InPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_RecordEventInfoList(TArray<FG01EventTriggerID> InTriggerIDList);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_RecordEventInfo(FG01EventTriggerID InEventTriggerID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_LeavePartyByPartyIndex(int32 InPartyIndex, bool InIsDeath);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_LeavePartyByClassID(FG01CharaClassID InClassId, bool InIsDeath);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_JoinPartyByClassID(FG01CharaClassID InClassId, int32 InPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_JoinPartyByCharaID(TEnumAsByte<EG01PartyJoinType::Type> InJoinType, FG01CharacterID InCharacterId, int32 InJoinPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_JoinParty(TEnumAsByte<EG01PartyJoinType::Type> InJoinType, FEditableLevelObjectID InJoinLevelObjectID, int32 InJoinPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_DeactivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_ChangeIncomeEventFlag(FG01IncomeEventIDStruct InIncomeEventID, bool InIsActive);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_CancelReleasePlayableClass(EG01FriendClass InPlayableClass);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_CancelReleaseFriendClass(EG01FriendClass InFriendClass);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_AddYears(int32 InYearsCount, bool InIsForcePeriodJump);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_AddImperialForcePoint(FG01ImperialForcePointIDStruct InPointID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_AddEventPoint(FG01EventPointIDStruct InEventPointID, EG01QStackPeriodJumpType InJumpType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_AddCrown(bool InIsImperial, int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_ActivityLaunch(FG01ActivityID InActivityID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_ActivityComplete(FG01ActivityID InActivityID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_ActivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void Cmd_RS_SetDestinationPrecedenced(bool InIsPrecedence);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RS_CheckLevel(bool& OutIsTarget, const TArray<TSoftObjectPtr<UWorld>>& InTargetLevels);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_UpdateCharaVariation(FG01VariationCharaIDStruct InCharaID, EG01CharacterVariationType InType, bool InIsReset);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_SetReleasePlayableClass(EG01FriendClass InPlayableClass);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_SetReleaseFriendClass(EG01FriendClass InFriendClass);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_RestoreParty(int32 InPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_RemoveStoryClearFlags(int32 InFlags);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_RecordGeneration(EG01RecordGenerationType InRecordType, int32 InGeneration);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_RecordEventInfoList(TArray<FG01EventTriggerID> InTriggerIDList);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_RecordEventInfo(FG01EventTriggerID InEventTriggerID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_LeavePartyByPartyIndex(int32 InPartyIndex, bool InIsDeath);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_LeavePartyByClassID(FG01CharaClassID InClassId, bool InIsDeath);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_JoinPartyByClassID(FG01CharaClassID InClassId, int32 InPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_JoinPartyByCharaID(TEnumAsByte<EG01PartyJoinType::Type> InJoinType, FG01CharacterID InCharacterId, int32 InJoinPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_JoinParty(TEnumAsByte<EG01PartyJoinType::Type> InJoinType, FEditableLevelObjectID InJoinLevelObjectID, int32 InJoinPartyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_QA_GetPeriod(int32& OutPeriod) const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_DeactivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_CheckStoryClearFlags(bool& OutHasAllFlags, int32 InFlags);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_CheckReleaseFriendClass(EG01FriendClass InFriendClass, bool& OutIsRelease);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_ChangeIncomeEventFlag(FG01IncomeEventIDStruct InIncomeEventID, bool InIsActive);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_CancelReleasePlayableClass(EG01FriendClass InPlayableClass);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_CancelReleaseFriendClass(EG01FriendClass InFriendClass);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_AddYears(int32 InYearsCount, bool InIsForcePeriodJump);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_AddStoryClearFlags(int32 InFlags);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_AddEventPoint(FG01EventPointIDStruct InEventPointID, EG01QStackPeriodJumpType InJumpType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_AddCrown(bool InIsImperial, int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_ActivityLaunch(FG01ActivityID InActivityID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_ActivityComplete(FG01ActivityID InActivityID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_ActivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_ActivateAbilitySystem();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_PlayGoComplete();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_PeriodJump(EQuestBufferIndex InBufferIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_PartyStatusLevelTotal(int32 InPartyIndex, TArray<EG01BattleArtsType> InArtsTypeList, int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_PartyStatusLevel(int32 InPartyIndex, EG01BattleArtsType InArtsType, int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_PartySpellLevelTotal(int32 InPartyIndex, int32 InLevel, FFlagIDListViewStruct InUmbroFlagID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_PartySkillLevelTotal(int32 InPartyIndex, int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_PartyChange(TEnumAsByte<EG01PartyJoinType::Type> InJoinType, FG01CharaClassID InClassId);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_ItemCollect(EQuestBufferIndex InBufferIndex, FName InItemID, int32 InCollectItemNum, bool InIsCheckInventory);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_ImperialLevel(int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_GenerationCount(EQuestBufferIndex InBufferIndex, int32 InGenerationCount, bool InIsTotal);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_EnemyDefeat_Field(EQuestBufferIndex InBufferIndex, TSoftClassPtr<AG01FieldEnemyBase> InEnemyClass, EG01QCEnemyDefeatCheckSpace InCheckSpace, TSoftObjectPtr<UWorld> InCheckWorld, EG01QCEnemyDefeatTargetNumType InTargetNumType, int32 InDefeatNum);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_EnemyDefeat_Battle(EQuestBufferIndex InBufferIndex, TSoftClassPtr<ACharacterVisualActor> InVisualActorClass, EG01QCEnemyDefeatCheckSpace InCheckSpace, TSoftObjectPtr<UWorld> InCheckWorld, EG01QCEnemyDefeatTargetNumType InTargetNumType, int32 InDefeatNum);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_EmperorSuccession(FG01CharaClassID InClassId, EG01EmperorSuccessionType InType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_DevelopedEquipment(FG01BlackSmithMenuIDStruct InEquipID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_DefeatSevenHeroes(EQuestBufferIndex InBufferIndex, int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_ClearAreaCount(EQuestBufferIndex InBufferIndex, int32 InCountNum, bool InIsTotalCount);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_CheckDLC(int32 InDLCIndex, bool InIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_BlackSmithLevel(int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_BlackSmithEquipState(FG01BlackSmithMenuIDStruct InEquipID, EG01BlackSmithMenuStateEnum InState);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_BattleEnd_Transient(FName InBattleID, int32 InEndTypeMask, int32 InEndCount, bool InIsLastEmperor);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_BattleEnd(EQuestBufferIndex InBufferIndex, FName InBattleID, int32 InEndTypeMask, int32 InEndCount, bool InIsLastEmperor);
    
};

