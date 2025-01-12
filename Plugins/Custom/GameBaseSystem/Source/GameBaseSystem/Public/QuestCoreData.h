#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EQuestEndCheckType.h"
#include "EQuestOrderState.h"
#include "EQuestSectionFlowBranchResult.h"
#include "EQuestSectionState.h"
#include "QuestBasisParameter.h"
#include "QuestCategory.h"
#include "QuestSectionLogData.h"
#include "QuestSectionParam.h"
#include "QuestCoreData.generated.h"

class AQuestObjectBase;
class UQuestCoreData;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQuestCoreData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UQuestCoreData* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UQuestCoreData*> Children;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Hierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NextSection;
    
public:
    UQuestCoreData();

    UFUNCTION(BlueprintCallable)
    void SetNextSection(int32 InSection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSucceededQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartedQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSectionWorking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPassedSection(int32 InSectionIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOrdered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMostParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFailedQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChildQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveOrderState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAvailablePeriod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnySectionState(TEnumAsByte<EQuestSectionState::Type> InCheckState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyOrderState(TEnumAsByte<EQuestOrderState::Type> InCheckState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllSectionState(TEnumAsByte<EQuestSectionState::Type> InCheckState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllOrderState(TEnumAsByte<EQuestOrderState::Type> InCheckState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetValidSectionTransitionLog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStackIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSectionTransitionLogIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSectionTransitionLog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EQuestSectionState::Type> GetSectionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetSectionParam(int32 InSectionIndex, bool& OutIsValid, FQuestSectionParam& OutParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSectionIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRoomID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuestUniqueID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetQuestNameTextID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetQuestID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AQuestObjectBase> GetQuestClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuestCategory GetQuestCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetPostSectionIndex(int32& OutIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetParentQuestID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetParent(bool& OutIsValid, UQuestCoreData*& OutParent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetOriginalQuestID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EQuestOrderState::Type> GetOrderState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMostParentQuestID() const;
    
    UFUNCTION(BlueprintCallable)
    void GetMostParentOrSelf(UQuestCoreData*& OutCoreData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetMostParent(bool& OutIsFound, UQuestCoreData*& OutMostParent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHierarchy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FQuestSectionLogData> GetFullSectionTransitionLog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFlowBranchResultLogIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EQuestSectionFlowBranchResult> GetFlowBranchResultLog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCustomQuestID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetChildren(bool& OutIsExists, TArray<UQuestCoreData*>& OutChildren, bool InIsRecursive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuestBasisParameter GetBasisParameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FindChild(FName InQuestID, bool& OutIsFound, UQuestCoreData*& OutChild) const;
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEndState(TEnumAsByte<EQuestEndCheckType::Type> InCheckType) const;
    
};

