#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "EQuestEndType.h"
#include "EQuestSectionFlowBranchResult.h"
#include "PreCalcSectionFlow.h"
#include "QuestBasisParameter.h"
#include "QuestIdentificationData.h"
#include "QuestSectionFlow.h"
#include "QuestSectionNameView.h"
#include "QuestStackOptionCondition.h"
#include "QuestObjectCore.generated.h"

class UDataTable;
class UQuestCoreData;
class UQuestManagerAccessComponent;
class UQuestStackConditions;
class UQuestStackObjectBase;

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API AQuestObjectCore : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIgnoreFlowPhase;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* QuestBasisParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestManagerAccessComponent* MQuestManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreCalcSectionFlow MPreCalcSectionDestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UQuestCoreData* CoreData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestStackConditions* MSectionStopConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableFrameDistributed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuestStackObjectBase*> SectionStackAsQA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSectionFlow SectionFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkipTargetFlowIndex;
    
public:
    AQuestObjectCore(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ResetFlowPhase();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSectionSkipping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSectionRewinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSectionPreCalculation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsInSectionRange(FQuestSectionNameView InBeginSectionName, FQuestSectionNameView InEndSectionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuringRestoration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetStackConditionsObject(TArray<UQuestStackConditions*>& OutStackConditionsObjects) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetQuestName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetQuestID() const;
    
    UFUNCTION(BlueprintCallable)
    UQuestCoreData* GetQuestCoreData(bool& ReIsValidData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FQuestIdentificationData GetQuestCategory(bool& ReIsValidData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetOriginalQuestID() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNotifyCount() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCustomQuestID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FQuestBasisParameter GetBasisParameter(bool& ReIsValidData) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndStackPhase();
    
    UFUNCTION(BlueprintCallable)
    void EndStackConditions();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_SetDestinationSection(FQuestSectionNameView InDestSection, bool InIsRewind);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_QuestEnd(TEnumAsByte<EQuestEndType::Type> InEndType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_StartQuest();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_SetDestinationSection(FQuestSectionNameView InDestSection, bool InIsRewind);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_QA_QuestEnd(TEnumAsByte<EQuestEndType::Type> InEndType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FL_Branch(EQuestSectionFlowBranchResult& OutBranches, bool InCondition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EV_QuestSucceeded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EV_QuestRestored(const FName InSectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EV_QuestFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EV_EndSection(const FName& InEndSection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EV_BeginSection(const FName& InBeginSection);
    
    UFUNCTION(BlueprintCallable)
    void BeginStackConditions(const FQuestStackOptionCondition& InOption);
    
};

