#pragma once
#include "CoreMinimal.h"
#include "EEventEndResult.h"
#include "EQuestEndCheckType.h"
#include "EditableLevelObjectID.h"
#include "EventEndParams.h"
#include "FlagIDListViewStruct.h"
#include "LevelTransitionInfoView.h"
#include "LevelTransitionParamRoom.h"
#include "QuestObjectCore.h"
#include "QuestSectionNameView.h"
#include "QuestObjectBase.generated.h"

class AEventObjectBase;
class AQuestObjectBase;
class UEventManagerAccessComponent;
class UFlagEventReceiveComponent;
class UFlagSystemManagerAccessCompo;
class ULevelSequence;

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API AQuestObjectBase : public AQuestObjectCore {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventManagerAccessComponent* MEventManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlagEventReceiveComponent* MFlagEventReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* MFlagManagerAccessor;
    
public:
    AQuestObjectBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_SetFlag(FFlagIDListViewStruct InFlagID, bool InSetValue);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_RemoveSectionLogToParent(FQuestSectionNameView InSection);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_QuestOrderByQuestID(FName InOriginalQuestID, FName InCustomQuestID, bool InIsWaitQuestEnd);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_QuestOrderByFullQuestID(FName InQuestID, bool InIsWaitQuestEnd);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_QuestOrder(TSoftClassPtr<AQuestObjectBase> InOrderQuestClass, bool InIsWaitQuestEnd);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_LevelTransition(FLevelTransitionInfoView InDestinationLevelInfo);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_EventOrderWithArgs(TSoftClassPtr<AEventObjectBase> InOrderEventClass, const TMap<FName, FString>& InArgs, bool InIsSectionWaitEventEnd, FEventEndParams InEndParams);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_EventOrder(TSoftClassPtr<AEventObjectBase> InOrderEventClass, bool InIsSectionWaitEventEnd, FEventEndParams InEndParams);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_AddSectionLogToParent(FQuestSectionNameView InSection);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_AddEventAtLevelTransition(FLevelTransitionInfoView InLevelInfo, TSoftClassPtr<AEventObjectBase> InEventClass);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_SetFlag(FFlagIDListViewStruct InFlagID, bool InSetValue);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_QuestOrder(TSoftClassPtr<AQuestObjectBase> InOrderQuestClass);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_LevelTransition(FLevelTransitionInfoView InDestinationLevelInfo);
    
    UFUNCTION(BlueprintCallable)
    bool Cmd_QA_GetFlag(FFlagIDListViewStruct InFlagID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_EventOrderWithArgs(TSoftClassPtr<AEventObjectBase> InOrderEventClass, const TMap<FName, FString>& InArgs, bool InIsSectionWaitEventEnd, FEventEndParams InEndParams);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_EventOrder(TSoftClassPtr<AEventObjectBase> InOrderEventClass, bool InIsSectionWaitEventEnd, FEventEndParams InEndParams);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_ChangePlayer(FEditableLevelObjectID InCharaLevelObjectID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_AddEventAtLevelTransition(FLevelTransitionInfoView InLevelInfo, TSoftClassPtr<AEventObjectBase> InEventClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EV_QuestOrdered(AQuestObjectBase* InQuestObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EV_EventOrdered(AEventObjectBase* InEventObject);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_TrialCheck(bool InIsTrialROM);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_SequencerFinishedForMultiChoice(TSoftObjectPtr<ULevelSequence> InTargetSequence, const TArray<int32>& InChoiceIndexResults);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_SequencerFinished(TSoftObjectPtr<ULevelSequence> InTargetSequencer, int32 InChoiceIndex);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_QuestProgress(TSoftClassPtr<AQuestObjectBase> InQuestClass, FQuestSectionNameView InSection);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_QuestEndByClass(TSoftClassPtr<AQuestObjectBase> InQuestClass, TEnumAsByte<EQuestEndCheckType::Type> InCheckType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_LevelTransitionOut(FLevelTransitionInfoView InTargetLevelInfo, FLevelTransitionParamRoom InTargetRoom, bool InIsMoment, bool InIsCheckPrevLevel);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_LevelTransition(FLevelTransitionInfoView InTargetLevelInfo, FLevelTransitionParamRoom InTargetRoom);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_FlagChanged(FFlagIDListViewStruct InFlagID, bool InChangedValue);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_EventEndByClass(TSoftClassPtr<AEventObjectBase> InEventClass, EEventEndResult InEndResult, FName InEndValue);
    
};

