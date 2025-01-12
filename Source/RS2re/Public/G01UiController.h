#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EInputGlobalState -FallbackName=EInputGlobalState
#include "EPlatformType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EPlatformType -FallbackName=EPlatformType
#include "EPlayerReactionType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EPlayerReactionType -FallbackName=EPlayerReactionType
#include "UiController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=UiController -FallbackName=UiController
#include "EBattleCommandMode.h"
#include "EG01BattleCameraPhaseType.h"
#include "EG01BattleMainPhaseType.h"
#include "EG01GimmickDropItemSource.h"
#include "EG01InteractObjectIconType.h"
#include "G01AttackInfo.h"
#include "G01AttackResultInfo.h"
#include "G01BattleEndNotifyData.h"
#include "G01BtCommandUiArtsData.h"
#include "G01DestinationInfos.h"
#include "G01DestinationUpdateData.h"
#include "G01UiController.generated.h"

class AActor;
class AAppActor;
class UG01BattleTask;
class USceneComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01UiController : public AUiController {
    GENERATED_BODY()
public:
    AG01UiController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Screen_OnTransitionEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Room_ChangeRoomActor(const AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Room_ChangeRoom();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Player_OnEndGimmickInteract();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Player_OnBeginGimmickInteract();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Player_InteractDeactivated(AActor* InSourceActor, EPlayerReactionType InPlayerReactionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Player_InteractActivated(AActor* InSourceActor, USceneComponent* InPositionComponent, EPlayerReactionType InPlayerReactionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Player_DeactivateObjectIcon(AActor* InSourceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Player_ActivateObjectIcon(AActor* InSourceActor, USceneComponent* InAttachComponent, EG01InteractObjectIconType InIconType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Objective_OnUpdateDestination(const FG01DestinationUpdateData& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Objective_OnRemoveDestination(const FG01DestinationInfos& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Objective_OnAddDestination(const FName& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Message_OnDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Message_OnActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Input_OnChangeInputHardware(EPlatformType InHardType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Input_OnChangeInputGlobalState(EInputGlobalState InInputGlobalState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_WorldMapOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_WorldMapClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_ShopMenu_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_ShopMenu_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_PeriodJump_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_PeriodJump_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_PeriodJump_AnimationClosing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_MainMenuOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_MainMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_FieldMapOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_FieldMapClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_EmperorChoiceMenu_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_EmperorChoiceMenu_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_ClearAreaTelop_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_ClearAreaTelop_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_BlackSmithMenu_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldUI_BlackSmithMenu_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldEnemy_LoseSightPlayer(USceneComponent* InPositionComponent, AActor* InEnemyActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_FieldEnemy_DiscoverPlayer(USceneComponent* InPositionComponent, AActor* InEnemyActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_DropItem_OnGetMoney(EG01GimmickDropItemSource InSource, int32 InMoney);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_DropItem_OnGetItem(EG01GimmickDropItemSource InSource, const FName& InItemID, int32 InItemCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_BattleUi_OnSettingPreSelectActionData(FG01BtCommandUiArtsData InArtsData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_BattleUi_OnSettingPreActionDataId(FName InActionId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_BattleUi_OnSelectActionCharacter(AAppActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_BattleUi_OnModeChange(EBattleCommandMode InMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_TurnElapsed(int32 InCurrentTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_Target(AActor* InMainTarget, const TArray<AActor*>& InSubTargetList, bool InIsAll, bool InIsRandom, bool InIsOutOfRange);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_Start();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_OnStartLinkPlayback(AActor* InSourceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_OnStartLinkAction(const TArray<AActor*>& InSourceList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_OnMissed(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_OnEndLinkAction(const TArray<AActor*>& InSourceList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_OnDefeated(AActor* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_OnCreateCurrentCommandList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_OnCommandTaskStarted(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_OnCommandTaskEnd(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_OnChangedStatus(AActor* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_OnChangedLinkGauge(int32 InGauge, bool InIsMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_MainPhaseChange(EG01BattleMainPhaseType InPhaseType, EG01BattleMainPhaseType InOldPhaseType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_LpRecover(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, FG01AttackResultInfo InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_LpDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, FG01AttackResultInfo InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_HpRecover(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, FG01AttackResultInfo InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_HpDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, FG01AttackResultInfo InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_End(const FG01BattleEndNotifyData& InBattleEndNotifyData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_DEL_OnDebuffCommandSpeed(const TArray<AActor*>& InTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_DecideLpRecover(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, FG01AttackResultInfo InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_DecideLpDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, FG01AttackResultInfo InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_DecideHpRecover(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, FG01AttackResultInfo InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_DecideHpDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, FG01AttackResultInfo InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_DecideBpRecover(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, FG01AttackResultInfo InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_CameraPhaseChange(EG01BattleCameraPhaseType InPhaseType, EG01BattleCameraPhaseType InOldPhaseType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Notify_Battle_BpRecover(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, FG01AttackResultInfo InData);
    
};

