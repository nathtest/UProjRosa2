#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "AppActor.h"
#include "EEventConditionCheck.h"
#include "EEventEndResult.h"
#include "EEventFlags.h"
#include "EEventInteractTagCheck.h"
#include "EEventState.h"
#include "EPlayerReactionType.h"
#include "EQuestEndCheckType.h"
#include "EQuestSectionEvalOp.h"
#include "ESaveDataSyncType.h"
#include "EScreenTransitionType.h"
#include "EditableLevelObjectID.h"
#include "EnvironmentInfoView.h"
#include "EventArguments.h"
#include "EventCategory.h"
#include "EventResult.h"
#include "FlagIDListViewStruct.h"
#include "InteractColliderTag.h"
#include "LevelObjectFindResult.h"
#include "LevelTransitionInfoView.h"
#include "QuestSectionNameView.h"
#include "SaveDataSaveOptions.h"
#include "FlagSystemManagerAccessCompo.h"
#include "EventObjectBase.generated.h"

class AQuestObjectBase;
class UFlagSystemManagerAccessCompo;
class ULevelObjectFinderAccessComponent;
class UObject;
class UQuestManagerAccessComponent;
class USaveDataManagerAccessor;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AEventObjectBase : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsAllowMultiPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsAutoDestroyWithEventEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventArguments MEventArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestManagerAccessComponent* MQuestManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* MFlagManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USaveDataManagerAccessor* SaveDataManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULevelObjectFinderAccessComponent* LevelObjectFinder;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEventCategory MCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsEventCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsBlockForceEndRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* MEventRequester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEventFlags EventFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEventState EventState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MEventInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEventEndResult MEventEndResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPlayerReactionType PlayerReactionType;
    
public:
    AEventObjectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingExecute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoDestroyWithEventEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowMultiPlay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerReactionType GetPlayerReactionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInteractColliderTag GetInteractTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEventInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEventCategory GetEventCategory() const;
    
    UFUNCTION(BlueprintCallable)
    void EndWaitExecutableEvent();
    
    UFUNCTION(BlueprintCallable)
    bool DoWaitExecutableEvent(const FEventArguments& InArguments);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EV_Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EV_EndEvent(FEventResult InEndResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EV_BeginEvent(FName InInteractTag, const TMap<FName, FString>& InArguments);
    
public:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="InWorldContext"))
    void Cmd_EA_WaitEventEnd(const UObject* InWorldContext, FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EA_SetFlag(FFlagIDListViewStruct InFlagID, bool InSetValue);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EA_SetBlockForceEndRequest(bool InIsBlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_EA_RandomInt(int32& OutValue, int32 InMin, int32 InMax) const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EA_PrevLevelTransition(EScreenTransitionType InFadeType, float InFadeTime);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EA_PlayEvent(const FEventArguments& InArguments);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EA_LevelTransition(FLevelTransitionInfoView InDestinationLevelInfo, EScreenTransitionType InFadeType, float InFadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_EA_IsEventPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_EA_IsEventForceEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_EA_IsEventEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_EA_IsEventCheckExecutable() const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EA_InteractTagCheck(FInteractColliderTag InInteractTag, EEventInteractTagCheck& OutBranches, bool& OutIsSame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* Cmd_EA_GetRequesterMost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* Cmd_EA_GetRequester() const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EA_FindLevelObject(bool& OutIsFound, FLevelObjectFindResult& OutResult, FEditableLevelObjectID InID);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EA_ExecuteAutoSave(bool& OutIsSuccess, ESaveDataSyncType InSyncType, const FSaveDataSaveOptions& InOptions);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EA_EnvironmentSetting(FEnvironmentInfoView InEnvironmentViewInfo);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EA_EndEvent(EEventEndResult InEndResult, FName InEndValue);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_EA_ConditionCheck(EEventConditionCheck& OutBranches, bool InCondition, int32 InReactionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_EA_CheckQuestSectionRange(TSoftClassPtr<AQuestObjectBase> InQuestClass, FName InCustomQuestID, FQuestSectionNameView InSectionRangeBeginName, EQuestSectionEvalOp InBeginEvalOp, FQuestSectionNameView InSectionRangeEndName, EQuestSectionEvalOp InEndEvalOp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_EA_CheckQuestSection(TSoftClassPtr<AQuestObjectBase> InQuestClass, FName InCustomQuestID, FQuestSectionNameView InCheckSectionName, EQuestSectionEvalOp InEvalOp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_EA_CheckQuestEndState(TSoftClassPtr<AQuestObjectBase> InQuestClass, FName InCustomQuestID, TEnumAsByte<EQuestEndCheckType::Type> InCheckType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_EA_CheckFlag(FFlagIDListViewStruct InFlagID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_EA_CheckEventState(int32 InCheckState);
    
    UFUNCTION(BlueprintCallable)
    bool CheckEventExecutable(FEventArguments InArguments);
    
};

