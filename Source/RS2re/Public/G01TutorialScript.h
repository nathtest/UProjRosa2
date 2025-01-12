#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EQuestSectionEvalOp.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EQuestSectionEvalOp -FallbackName=EQuestSectionEvalOp
#include "FlagAccessParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagAccessParam -FallbackName=FlagAccessParam
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "FlagSystemObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemObserverInf -FallbackName=FlagSystemObserverInf
#include "QuestManagerObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestManagerObserverInf -FallbackName=QuestManagerObserverInf
#include "QuestReceiveParamQuestSectionChanged.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestReceiveParamQuestSectionChanged -FallbackName=QuestReceiveParamQuestSectionChanged
#include "QuestSectionNameView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestSectionNameView -FallbackName=QuestSectionNameView
#include "SequenceManagerObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceManagerObserverInf -FallbackName=SequenceManagerObserverInf
#include "SequencePlayFinishParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequencePlayFinishParam -FallbackName=SequencePlayFinishParam
#include "VisualActorID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VisualActorID -FallbackName=VisualActorID
#include "EBattleStartType.h"
#include "EG01BattleArtsLearnType.h"
#include "EG01BattleCameraPhaseType.h"
#include "EG01BattleMainPhaseType.h"
#include "EG01HudInformatioCategoryEnum.h"
#include "EG01HudInformationNoticeTypeEnum.h"
#include "EG01InventoryItemEquiomentType.h"
#include "EG01InventoryItemNotifyType.h"
#include "EG01MapAspectType.h"
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01AddedPotentObserverInf.h"
#include "G01AttackInfo.h"
#include "G01AttackResultInfo.h"
#include "G01BattleArtsTableRow.h"
#include "G01BattleCharacterSkillUnitStruct.h"
#include "G01BattleCharacterSpellUnitStruct.h"
#include "G01BattleCommandUnit.h"
#include "G01BattleEndNotifyData.h"
#include "G01BattleManagerObserverInf.h"
#include "G01BattleMapAspectUiControllerObserverInf.h"
#include "G01BattleResultUiContObserverInf.h"
#include "G01BattleSealedUiControllerObserverInf.h"
#include "G01BattleTimelineUiControllerObserverInf.h"
#include "G01BattleTutorialNotifyCounterArts.h"
#include "G01BattleTutorialNotifyFathom.h"
#include "G01BattleTutorialNotifySkillArts.h"
#include "G01BattleTutorialNotifySpellArts.h"
#include "G01BattleTutorialObserverInf.h"
#include "G01BlackSmithMenuUiControllerObserverInf.h"
#include "G01BtCommandUiContObserverInf.h"
#include "G01BtGameoverUiContObserverInf.h"
#include "G01BtStartUiContObserverInf.h"
#include "G01CharaClassID.h"
#include "G01CharaVariableStatus.h"
#include "G01CharacterID.h"
#include "G01EmperorChoiceUiControllerObserverInf.h"
#include "G01FacilityDevelopmentUiControllerObserverInf.h"
#include "G01FieldPlayerManagerObserverInf.h"
#include "G01GimmickSpotObserverInf.h"
#include "G01HerosMemoryUiControllerObserverinf.h"
#include "G01HudInformationObserverInf.h"
#include "G01InventorManagerObserverInf.h"
#include "G01InventoryItemStruct.h"
#include "G01LearnArtsManagerObserverInf.h"
#include "G01LibrarySearchTeacherUiControllerObserverInf.h"
#include "G01MainMenuAbilityUiControllerObserverInf.h"
#include "G01MainMenuEquipmentUiControllerObserverInf.h"
#include "G01MainMenuFormationUiControllerObserverInf.h"
#include "G01MainMenuItemUiControllerObserverInf.h"
#include "G01MainMenuLibraryTopUiControllerObserverInf.h"
#include "G01MainMenuQuestUiControllerObserverInf.h"
#include "G01MainMenuStatusUiControllerObserverInf.h"
#include "G01MainMenuTechniqueArtUiControllerObserverInf.h"
#include "G01MainMenuTopUiControllerObserverInf.h"
#include "G01MsgChoiceUiControllerObserverInf.h"
#include "G01MsgSubtitleUiControllerObserverInf.h"
#include "G01MusicAppreciationUiControllerObserverInf.h"
#include "G01PartyFormationUiControllerObserverInf.h"
#include "G01PartyLearnArtsStruct.h"
#include "G01PeriodJumpUiControllerObserverInf.h"
#include "G01PeriodManagerObserverInf.h"
#include "G01ShopUiControllerObserverInf.h"
#include "G01SkillArtsDojoContObserverInf.h"
#include "G01SpellInstituteContObserverInf.h"
#include "G01ThroneMenuUiControllerObserverInf.h"
#include "G01TutorialID.h"
#include "G01TutorialUiControllerObserverInf.h"
#include "G01UniversityUiControllerObserverInf.h"
#include "G01TutorialScript.generated.h"

class AActor;
class AAppActor;
class AQuestObjectCore;
class UG01BattleTask;
class ULevelSequence;

UCLASS(Blueprintable)
class RS2RE_API UG01TutorialScript : public UObject, public IG01BattleManagerObserverInf, public IG01BattleTutorialObserverInf, public IG01InventorManagerObserverInf, public IG01TutorialUiControllerObserverInf, public ISequenceManagerObserverInf, public IQuestManagerObserverInf, public IFlagSystemObserverInf, public IG01PeriodManagerObserverInf, public IG01BattleResultUiContObserverInf, public IG01GimmickSpotObserverInf, public IG01MsgSubtitleUiControllerObserverInf, public IG01MsgChoiceUiControllerObserverInf, public IG01MainMenuEquipmentUiControllerObserverInf, public IG01MainMenuTechniqueArtUiControllerObserverInf, public IG01BattleSealedUiControllerObserverInf, public IG01MainMenuItemUiControllerObserverInf, public IG01EmperorChoiceUiControllerObserverInf, public IG01HerosMemoryUiControllerObserverinf, public IG01ThroneMenuUiControllerObserverInf, public IG01HudInformationObserverInf, public IG01MainMenuAbilityUiControllerObserverInf, public IG01MainMenuQuestUiControllerObserverInf, public IG01MainMenuTopUiControllerObserverInf, public IG01LearnArtsManagerObserverInf, public IG01BtStartUiContObserverInf, public IG01BtCommandUiContObserverInf, public IG01BtGameoverUiContObserverInf, public IG01FieldPlayerManagerObserverInf, public IG01MainMenuStatusUiControllerObserverInf, public IG01MainMenuFormationUiControllerObserverInf, public IG01MainMenuLibraryTopUiControllerObserverInf, public IG01MusicAppreciationUiControllerObserverInf, public IG01SpellInstituteContObserverInf, public IG01SkillArtsDojoContObserverInf, public IG01ShopUiControllerObserverInf, public IG01PartyFormationUiControllerObserverInf, public IG01BlackSmithMenuUiControllerObserverInf, public IG01PeriodJumpUiControllerObserverInf, public IG01UniversityUiControllerObserverInf, public IG01FacilityDevelopmentUiControllerObserverInf, public IG01LibrarySearchTeacherUiControllerObserverInf, public IG01BattleMapAspectUiControllerObserverInf, public IG01AddedPotentObserverInf, public IG01BattleTimelineUiControllerObserverInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01TutorialID> RequestTutorialIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFlagAccessParam> CachedFlagAccessParams;
    
public:
    UG01TutorialScript();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_UniversityExam_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_ThroneTopMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_ThroneAbdicationMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_StatusMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_SpellInstituteMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_SkillSpellMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_ShopMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_SequenceChoice_OnOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_SearchTeacher_StampFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_QuestMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_PeriodJump_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_PartyMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_Notify_Opened(EG01HudInformatioCategoryEnum InCategory, EG01HudInformationNoticeTypeEnum InNoticeType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_MusicMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_LibraryMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_InventoryMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_ImperialMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_HeroesMemory_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_GameOver_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_FormationMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_FacilityDevelopment_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_EquipmentMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_EmperorSuccession_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_DojoMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_BlackSmithMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_BattleSealed_OnOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_BattleResult_OnOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_BattleCommand_Opened(const FG01BattleCommandUnit& InCommand, const FG01CharacterID& InCharacterId, const FG01CharaClassID& InClassId, const FVisualActorID& InVisualActorID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_UI_AbilityMenu_Opened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Tutorial_OnOpened(const FG01TutorialID& InTutorialId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Tutorial_OnClosed(const FG01TutorialID& InTutorialId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Sequence_OnFinished(const FSequencePlayFinishParam& InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_SavePoint_OnBeginOverlap();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_RecoveryPoint_OnBeginOverlap();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Quest_OnPreSectionChanged(const FQuestReceiveParamQuestSectionChanged& InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Quest_OnPostSectionChanged(const FQuestReceiveParamQuestSectionChanged& InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Player_OnFieldPlayable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Period_OnPeriodJump(int32 InPeriodNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Period_OnGenerationChanged(int32 InPrevGeneration, int32 InNextGeneration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Inventory_OnEquipmentItem(FG01CharacterID InCharacterId, FName InItemID, EG01InventoryItemEquiomentType InEquipmentType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Inventory_OnAddItem(EG01InventoryItemNotifyType InNotifyType, FName ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Flag_OnChanged(const FFlagIDListViewStruct& InFlagID, bool InOldValue, bool InCurrentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnStartPlaybackTask(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnStart(EBattleStartType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnMissed(AActor* InSource, AActor* InTarget, const FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnInspirationSpell(const FG01BattleTutorialNotifySpellArts& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnInspirationSkill(const FG01BattleTutorialNotifySkillArts& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnInspirationFathom(const FG01BattleTutorialNotifyFathom& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnInspirationCounter(const FG01BattleTutorialNotifyCounterArts& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnFinishArts(AActor* InSource, const TArray<AActor*>& InTargetList, UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnEntryMapAspect(EG01MapAspectType InType, bool InIsFirst, bool InIsSecond);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnEntryDangerIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnEnd(const FG01BattleEndNotifyData& InEndData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnDamaged(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnChangeMainPhase(EG01BattleMainPhaseType InCurrentPhase, EG01BattleMainPhaseType InOldPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnChangeCameraPhase(EG01BattleCameraPhaseType InCurrentPhase, EG01BattleCameraPhaseType InNextPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnAddExternal(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Battle_OnAddAilment(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_TN_Arts_OnLearnArts(const FG01PartyLearnArtsStruct InLearnArts, const EG01BattleArtsLearnType InArtsType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TA_Sequence_IsPlayingAny(bool& OutIsPlaying);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TA_Sequence_IsPlaying(bool& OutIsPlaying, TSoftObjectPtr<ULevelSequence> InSequence);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TA_RequestTutorial(bool InIsForceListIn);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TA_Quest_CheckQuestSectionRange(bool& OutIsMeet, TSoftClassPtr<AQuestObjectCore> InQuestClass, FName InCustomQuestID, const FName& InBeginSectionName, EQuestSectionEvalOp InBeginEvalOp, const FName& InEndSectionName, EQuestSectionEvalOp InEndEvalOp);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TA_Quest_CheckQuestSection(bool& OutIsMeet, TSoftClassPtr<AQuestObjectCore> InQuestClass, FName InCustomQuestID, FQuestSectionNameView InSectionName, EQuestSectionEvalOp InEvalOp);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TA_Party_GetPartyStatus(TArray<FG01CharaVariableStatus>& OutStatusList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Cmd_TA_Inventory_GetEquipment(FG01InventoryItemStruct& OutEquipment, const FG01CharacterID& InCharacterId, EG01InventoryItemEquiomentType InEquipmentType) const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TA_Flag_SetFlagValue(bool& OutIsSuccess, FFlagIDListViewStruct InFlagID, bool InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_TA_Flag_GetFlagValue(bool& OutValue, FFlagIDListViewStruct InFlagID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_TA_Battle_IsLinkable(bool& OutIsLinkable, AActor* InSourceActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_TA_Battle_GetTotalBattleCountWin(int32& OutBattleCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_TA_Battle_GetTotalBattleCountLose(int32& OutBattleCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_TA_Battle_GetTotalBattleCountEscape(int32& OutBattleCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_TA_Battle_GetTotalBattleCount(int32& OutBattleCount) const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TA_Battle_GetSpellList(TArray<FName>& OutWeaponIdList, TArray<FG01BattleCharacterSpellUnitStruct>& OutSpellList, AActor* InSourceActor);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TA_Battle_GetSkillList(TArray<FName>& OutWeaponIdList, TArray<FG01BattleCharacterSkillUnitStruct>& OutSkillList, AActor* InSourceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Cmd_TA_Battle_GetPartyCharacters(TArray<AAppActor*>& OutCharacters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_TA_Battle_GetOverDriveGaugeMax(int32& OutOverDriveGaugeMax) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_TA_Battle_GetOverDriveGauge(int32& OutOverDriveGauge) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Cmd_TA_Battle_GetEnemyCharacters(TArray<AAppActor*>& OutCharacters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Cmd_TA_Battle_FindArtsData(bool& OutIsExist, FG01BattleArtsTableRow& OutArtsData, FName InArtsID) const;
    

    // Fix for true pure virtual functions not being implemented
};

