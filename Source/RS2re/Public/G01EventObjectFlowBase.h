#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "EAISpeed.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAISpeed -FallbackName=EAISpeed
#include "EAIState.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAIState -FallbackName=EAIState
#include "EScreenTransitionType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EScreenTransitionType -FallbackName=EScreenTransitionType
#include "EditableLevelObjectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EditableLevelObjectID -FallbackName=EditableLevelObjectID
#include "EventObjectFlowBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EventObjectFlowBase -FallbackName=EventObjectFlowBase
#include "ForceFeedbackCommonParams.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ForceFeedbackCommonParams -FallbackName=ForceFeedbackCommonParams
#include "ForceFeedbackPlayParams.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ForceFeedbackPlayParams -FallbackName=ForceFeedbackPlayParams
#include "InputMappingName.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=InputMappingName -FallbackName=InputMappingName
#include "LevelTransitionInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelTransitionInfo -FallbackName=LevelTransitionInfo
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "VFXExternalParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXExternalParam -FallbackName=VFXExternalParam
#include "VFXID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXID -FallbackName=VFXID
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextJustify -FallbackName=ETextJustify
//CROSS-MODULE INCLUDE V2: -ModuleName=UnrealEngineHelper -ObjectName=EGeneralCompareOperator -FallbackName=EGeneralCompareOperator
#include "EG01AreaId.h"
#include "EG01CharacterVariationType.h"
#include "EG01CharacterVisualType.h"
#include "EG01EmperorSuccessionType.h"
#include "EG01FriendClass.h"
#include "EG01GameDifficultyType.h"
#include "EG01InventoryItemEquiomentType.h"
#include "EG01PartyJoinType.h"
#include "G01AchievementID.h"
#include "G01ActivityID.h"
#include "G01BattleEndNotifyData.h"
#include "G01BattleSealedUiControllerObserverInf.h"
#include "G01BattleSetupData.h"
#include "G01BlackSmithMenuUiControllerObserverInf.h"
#include "G01CameraShakeObserverInf.h"
#include "G01CharaClassID.h"
#include "G01CharaStatus.h"
#include "G01CharacterID.h"
#include "G01ChronologyUiControllerObserverInf.h"
#include "G01ClassInfoTableRow.h"
#include "G01ClearAreaUiControllerObserverInf.h"
#include "G01DemoPageUiControllerObserverInf.h"
#include "G01EnvPresetDataAssetID.h"
#include "G01EventHistoryRecord.h"
#include "G01EventPointIDStruct.h"
#include "G01EventSimpleTalkDisplayPreset.h"
#include "G01EventTriggerID.h"
#include "G01FacilityDevelopmentUiControllerObserverInf.h"
#include "G01FieldNpcObserverInf.h"
#include "G01HerosMemoryUiControllerObserverinf.h"
#include "G01IncomeEventIDStruct.h"
#include "G01InventoryItemStruct.h"
#include "G01LibrarySearchTeacherUiControllerObserverInf.h"
#include "G01MusicAppreciationUiControllerObserverInf.h"
#include "G01NpcReactionAnimIDStruct.h"
#include "G01PartyFormationReactionTypeIDStruct.h"
#include "G01PartyFormationUiControllerObserverInf.h"
#include "G01PartyManagerObserverInf.h"
#include "G01ReasonUiControllerObserverInf.h"
#include "G01SaveLoadUiControllerObserverInf.h"
#include "G01ShopIDStruct.h"
#include "G01ShopUiControllerObserverInf.h"
#include "G01SkillArtsDojoContObserverInf.h"
#include "G01StaffRollUiControllerObserverInf.h"
#include "G01StandardDialogUiControllerObserverInf.h"
#include "G01TextFindArgs.h"
#include "G01UniversityUiControllerObserverInf.h"
#include "G01VariationCharaIDStruct.h"
#include "Templates/SubclassOf.h"
#include "ScreenTransitionManagerAccessor.h"
#include "UiManagerAccessor.h"
#include "G01EventObjectFlowBase.generated.h"

class AActor;
class AQuestObjectBase;
class UCameraShakeBase;
class UG01BattleManagerAccessor;
class UG01BlackSmithManagerAccessor;
class UG01CharacterManagerAccessor;
class UG01ChronologyUiControllerAccessor;
class UG01ClassInfoManagerAccessor;
class UG01ClearAreaManagerAccessor;
class UG01EnvironmentManagerAccessor;
class UG01FacilityDevelopmentUiControllerAccessor;
class UG01FieldEnemyGeneratorManagerAccessor;
class UG01FieldNpcGeneratorManagerAccessor;
class UG01FieldPlayerManagerAccessor;
class UG01GameForceFeedbackManagerAccessor;
class UG01GamePlayDataManagerAccessor;
class UG01GameSystemDataManagerAccessor;
class UG01GimmickManagerAccessor;
class UG01HerosMemoryUiControllerAccessor;
class UG01HistoryManagerAccessor;
class UG01InventoryManagerAccessor;
class UG01MainMenuManagerAccessor;
class UG01MusicAppreciationUiControllerAccessor;
class UG01PartyFormationManagerAccessor;
class UG01PartyManagerAccessor;
class UG01PeriodManagerAccessor;
class UG01QuestManagerAccessor;
class UG01ReasonUiControllerAccessor;
class UG01RoomManagerAccessor;
class UG01SaveDataManagerAccessor;
class UG01SaveLoadManagerAccessor;
class UG01ShopUiControllerAccessor;
class UG01SkillArtsDojoManagerAccessor;
class UG01SpellInstituteManagerAccessor;
class UG01StaffRollUiControllerAccessor;
class UG01UniversityManagerAccessor;
class UG01WalletUiControllerAccessor;
class ULoadScreenManagerAccessor;
class UScreenTransitionManagerAccessor;
class UUiManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01EventObjectFlowBase : public AEventObjectFlowBase, public IG01ClearAreaUiControllerObserverInf, public IG01PartyFormationUiControllerObserverInf, public IG01SaveLoadUiControllerObserverInf, public IG01UniversityUiControllerObserverInf, public IG01MusicAppreciationUiControllerObserverInf, public IG01StandardDialogUiControllerObserverInf, public IG01PartyManagerObserverInf, public IG01CameraShakeObserverInf, public IG01ShopUiControllerObserverInf, public IG01LibrarySearchTeacherUiControllerObserverInf, public IG01ReasonUiControllerObserverInf, public IG01FieldNpcObserverInf, public IG01StaffRollUiControllerObserverInf, public IG01ChronologyUiControllerObserverInf, public IG01BlackSmithMenuUiControllerObserverInf, public IG01SkillArtsDojoContObserverInf, public IG01HerosMemoryUiControllerObserverinf, public IG01FacilityDevelopmentUiControllerObserverInf, public IG01DemoPageUiControllerObserverInf, public IG01BattleSealedUiControllerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01BattleManagerAccessor* MBattleManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01PartyManagerAccessor* PartyManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01CharacterManagerAccessor* CharacterManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01QuestManagerAccessor* G01QuestManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01PeriodManagerAccessor* PeriodManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01GamePlayDataManagerAccessor* GamePlayDataManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01FieldPlayerManagerAccessor* FieldPlayerManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01GimmickManagerAccessor* MGimmickManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01InventoryManagerAccessor* InventoryManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01ClassInfoManagerAccessor* ClassInfoManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01EnvironmentManagerAccessor* EnvironmentManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01FieldEnemyGeneratorManagerAccessor* FieldEnemyGeneratorManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01FieldNpcGeneratorManagerAccessor* FieldNpcGeneratorManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01ClearAreaManagerAccessor* ClearAreaManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01PartyFormationManagerAccessor* PartyFormationManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01SaveLoadManagerAccessor* SaveLoadManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01UniversityManagerAccessor* UniversityManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01MusicAppreciationUiControllerAccessor* MusicAppreciationUiControllerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01WalletUiControllerAccessor* WalletUiControllerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01RoomManagerAccessor* RoomManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScreenTransitionManagerAccessor* ScreenTransitionManagerAccesser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01ShopUiControllerAccessor* ShopUiControllerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01MainMenuManagerAccessor* MainMenuManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULoadScreenManagerAccessor* LoadScreenManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01ReasonUiControllerAccessor* ReasonUiControllerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01FacilityDevelopmentUiControllerAccessor* FacilityDevelopmentAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01HistoryManagerAccessor* HistoryManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01SaveDataManagerAccessor* G01SaveDataManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01StaffRollUiControllerAccessor* StaffRollAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01ChronologyUiControllerAccessor* ChronologyAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01GameSystemDataManagerAccessor* GameSystemAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01BlackSmithManagerAccessor* BlackSmithManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01SkillArtsDojoManagerAccessor* SkillArtsDojoManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01SpellInstituteManagerAccessor* SpellInstituteManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01HerosMemoryUiControllerAccessor* HerosMemoryMenuAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01GameForceFeedbackManagerAccessor* GameForceFeedbackManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUiManagerAccessor* UiManagerAccessor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01BattleEndNotifyData BattleResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsDisablePlayerInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsPlayingMontage;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsCloseToParty;
    
    AG01EventObjectFlowBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_WalletCalcCrown(int32 InValue, bool InIsEnd);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_WalletActive(bool InIsActive);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_WaitDialogClose();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_WaitBattleEnd(const FName InBattleID, bool& OutIsTargetBattle);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_UnlockEmperorSuccession();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_UnlockAchievementProgress(FG01AchievementID InAchievementID, float InProgress);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_UnlockAchievement(FG01AchievementID InAchievementID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_StopPlayerTurnOnTarget();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_StopNpcReaction(FEditableLevelObjectID InLevelObjectID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_StopForceFeedback(const FForceFeedbackCommonParams& InParams);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_StartReadyMove(const FTransform& InTransform, const float InTime);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_StartPointCamera(const FVector& InLocation, const float InAlpha);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_StartPlayerTurnOnTarget(FEditableLevelObjectID InLevelObjectID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_StartForceMove(const FVector& InLocation, const float InToleranceDistance, bool InIsWait, EAISpeed InMoveType, bool InPausedCamera);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_StartCameraShake(TSubclassOf<UCameraShakeBase> InShakeClass, bool InIsDisablePlayerInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Cmd_FA_SetupEnvironmentByEnvPresetDataAsset(FG01EnvPresetDataAssetID InEnvPresetDataAssetID) const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_SetTalkReaction(FEditableLevelObjectID InLevelObjectID, FG01NpcReactionAnimIDStruct InNpcReactionAnimID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_SetReleaseFriendClass(EG01FriendClass InFriendClass);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_SetPlayerCharacterID(const FName InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_SetIsClear(bool InIsClear);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_SetEnemyAIState(FEditableLevelObjectID InEnemyLevelObjectID, EAIState InCurrentAIState, EAIState InChangeAIState);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_SetEnableGaze(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_SetDreadQueenDungeonDiskParameter(const FName InName, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_SetDeathCharacterByClassID(const FG01CharaClassID InClassId);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_SetDeathCharacter(const FG01CharacterID InCharaID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_SetCharacterVisualType(FG01CharacterID InCharacterId, EG01CharacterVisualType InVisualType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_SetCharacterVariationType(FG01VariationCharaIDStruct InVariationCharacterID, EG01CharacterVariationType InVariationType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_ScreenTransitionOut(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_ScreenTransitionIn(EScreenTransitionType InType, float InTime);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RestoreParty(int32 InPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_ResetPlayerCharacterID();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestWaitBattleSealed();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestTeacherMenu();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestStaffRoll();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestSpellInstitute(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestSkillArtsDojo(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestSimpleLoad();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestShopMenu(FG01ShopIDStruct ShopID, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestSaveScreen();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestReturnToTitleSave();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestReason();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestPartyFormationFriendFromBlackSmith(AActor* Actor, FG01CharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestPartyFormationFriend(AActor* Actor, FG01CharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestPartyFormation(AActor* Actor, FG01PartyFormationReactionTypeIDStruct ReactionID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestMusicAppreciation();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestLoseBattleAnimation();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestLoadScreen();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestImperialUniversityMenu(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestHerosMemoryMenu();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestHerosMemoryLoad();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestFirstImperialTest();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestFacilityDevelop();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestEmperorSuccessionByClassID(const TArray<FG01CharaClassID> InPickupClassIDList);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestEmperorSuccession(EG01EmperorSuccessionType InEmperorSuccessionType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestDemoPageFinish();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestClearArea(EG01AreaId InAreaID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestChronology();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestButtonNavi(FInputMappingName InputParam, FText TextID, float DispTime, bool PushErase);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RequestBlackSmith(AActor* Actor, bool IsFirst);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RemoveStoryClearFlags(int32 InFlags);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RemoveInventoryItem(int32& OutRemainNum, FName InItemID, int32 InRemoveNum);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RemoveButtonNavi();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RegenerateFriendNpcDirect();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RegenerateFriendNpc();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_RecordEventInfo(FG01EventTriggerID InEventTriggerID);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo"))
    void Cmd_FA_PlayNpcReaction(FEditableLevelObjectID InLevelObjectID, FG01NpcReactionAnimIDStruct InNpcReactionAnimID, FName InSectionName, FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_PlayForceFeedback(const FForceFeedbackPlayParams& InParams);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_PlayEffect(FEditableLevelObjectID InLevelObjectID, FVFXID InEffectID, FVFXExternalParam InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_LockEmperorSuccession();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_LeavePartyByPartyIndex(int32 InPartyIndex, bool InIsDeath);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_LeavePartyByClassID(FG01CharaClassID InClassId, bool InIsDeath);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_JoinPartyByClassID(FG01CharaClassID InClassId, int32 InPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_JoinPartyByCharaID(TEnumAsByte<EG01PartyJoinType::Type> InJoinType, FG01CharacterID InCharacterId, int32 InJoinPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_JoinParty(TEnumAsByte<EG01PartyJoinType::Type> InJoinType, FEditableLevelObjectID InJoinLevelObjectID, int32 InJoinPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    FG01NpcReactionAnimIDStruct Cmd_FA_GetTalkReaction(FEditableLevelObjectID InLevelObjectID);
    
    UFUNCTION(BlueprintCallable)
    AActor* Cmd_FA_GetPlayerTurnTarget();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_GetPlayerCharacterID(FG01CharacterID& OutCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_GetPartyMemberStatus(int32 InPartyIndex, FG01CharaStatus& OutDefaultStatus, FG01CharaStatus& OutCurrentStatus);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_GetPartyClassInfo(int32 InPartyIndex, bool& OutIsExist, FG01ClassInfoTableRow& OutInfo);
    
    UFUNCTION(BlueprintCallable)
    bool Cmd_FA_GetMaxDamageWeapon(FName InWeaponCategory, FG01InventoryItemStruct& OutData);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_GetLeaveCollisionLocation(FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_GetIsClear(bool& OutIsClear);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_GetEventRecord(FG01EventHistoryRecord& OutEventRecord, FG01EventTriggerID InEventTriggerID, bool InIsConvertToGeneration);
    
    UFUNCTION(BlueprintCallable)
    bool Cmd_FA_GetEnableGaze();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_GetEmperorClassID(FG01CharaClassID& OutClassID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_GetEmperorCharacterID(FG01CharacterID& OutCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_FA_GetDifficultyType(EG01GameDifficultyType& OutDifficultyType) const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_GetCurrentYears(int32& OutYears);
    
    UFUNCTION(BlueprintCallable)
    FLevelTransitionInfo Cmd_FA_GetCurrentLevelInfo();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_GetClearAreaNum(int32& OutClearAreaNum);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_GetChoiceWindowResult(int32 InEventKey, int32& OutSelectedIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_GetCharacterVisualType(FG01CharacterID InCharacterId, EG01CharacterVisualType& OutVisualType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_GetCharacterVariationType(FG01VariationCharaIDStruct InVariationCharacterID, EG01CharacterVariationType& OutVariationType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_GetBattleResult(FG01BattleEndNotifyData& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_ExecuteDarkStoneRingProcess();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_EquipmentInventoryItem(FG01CharacterID InCharacterId, FName InItemID, EG01InventoryItemEquiomentType InEquipmentType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_EnableInputPlayer();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_DisableInputPlayer();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_DeactivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_CloseWindow();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_CheckUnlockEmperorSuccession(bool& OutIsUnlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_FA_CheckTransitionFromSaveRestore() const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_CheckStoryClearFlags(bool& OutHasAllFlags, int32 InFlags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_FA_CheckReleasePlayableClass(EG01FriendClass InPlayableClass, bool& OutIsRelease) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_FA_CheckReleaseFriendClass(EG01FriendClass InFriendClass, bool& OutIsRelease) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_FA_CheckPlayGoCompleted(bool& OutIsCompleted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_FA_CheckPartyMemberClass(int32 InPartyIndex, FG01CharaClassID InClassId, bool& OutIsSame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_FA_CheckInventoryItem(bool& OutResult, FName InItemID, EGeneralCompareOperator InOperator, int32 InCompareNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_FA_CheckEquipmentItem(bool& OutResult, FName InItemID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_FA_CheckEnvironment(FG01EnvPresetDataAssetID InPresetID, bool& OutIsSame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_FA_CheckCrownNum(bool& OutResult, bool InIsImperial, EGeneralCompareOperator InOperator, int32 InCompareNum) const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_CheckActiveTalkCamera(bool& OutIsActive, AActor*& OutTalkTargetActor);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_ChangeTalkCamera(const AActor* InOverrideTalkTargetActor);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_ChangeRoom(FRoomID InRoomId, bool InForceNotify);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_ChangeIncomeEventFlag(FG01IncomeEventIDStruct InIncomeEventID, bool InIsActive);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_ChangeEmperor(const FName InCharacterId, EG01EmperorSuccessionType InEmperorSuccessionType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_CancelTalkCamera();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_CancelReleaseFriendClass(EG01FriendClass InFriendClass);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_CancelDeathCharacter(const FG01CharacterID InCharaID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_BeginStoneShrineEffectFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_BeginStoneShrineEffectFadeIn();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_BattleStartOnName(const FName InBattleID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_BattleStartOnData(const FG01BattleSetupData& InData);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_AddYears(int32 InYears, bool InIsForcePeriodJump);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_AddStoryClearFlags(int32 InFlags);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_AddInventoryItem(int32& OutRemainNum, FName InItemID, int32 InAddNum);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_AddEventPoint(bool& OutIsPeriodJumped, FG01EventPointIDStruct InEventPointID, bool InIsAllowPeriodJump);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_AddCrown(bool InIsImperial, int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_ActivityLaunch(FG01ActivityID InActivityID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_ActivityComplete(FG01ActivityID InActivityID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_ActivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CU_Talk(FEditableLevelObjectID InSpeakerLevelObjectID, FName InMessageTextID, FG01TextFindArgs InArgs, bool InIsAutoClose, bool InIsChangeAIState);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CU_SimpleTalk(FEditableLevelObjectID InSpeakerLevelObjectID, FName InMessageTextID, FG01TextFindArgs InArgs, FG01EventSimpleTalkDisplayPreset InDisplayPreset, float InMinDisplayTime, float InMaxDisplayDistance);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CU_ShowMsgWindow(TEnumAsByte<ETextJustify::Type> InJustify, FName InMessageTextID, FG01TextFindArgs InArgs);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CU_ShowChoiceWindow(FEditableLevelObjectID InSpeakerLevelObjectID, const TArray<FName>& InChoiceMessageIDList, int32& OutEventKey);
    

    // Fix for true pure virtual functions not being implemented
};

