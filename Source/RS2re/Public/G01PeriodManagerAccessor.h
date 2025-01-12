#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01EventPointIDStruct.h"
#include "G01EventTriggerID.h"
#include "G01PeriodManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01PeriodManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01PeriodManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SubYearsCount(int32 InSubAgeNum);
    
    UFUNCTION(BlueprintCallable)
    void SubCurrentJumpPoint(const FG01EventTriggerID& InEventTriggerID);
    
    UFUNCTION(BlueprintCallable)
    void SetYearsCount(int32 InAgeCount);
    
    UFUNCTION(BlueprintCallable)
    void SetRankPoint(const int32 InPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetEnablePeriodJump(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void PeriodJump(bool& OutIsJumped);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetYearsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalJumpPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPreYearsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPreJumpPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGenerationCount(int32& OutGenerationCount) const;
    
    UFUNCTION(BlueprintCallable)
    void GetEventTriggerIdList(TArray<FG01EventTriggerID>& OutIdList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetElapsedYears(int32 InBattleCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentJumpPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void ForcePeriodJump();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Debug_ResetTotalJumpPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void Debug_ResetRankPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Debug_ResetJumpPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ConvertYearsToGeneration(int32 InYearsCount, int32& OutGenerationCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ConvertGenerationToYears(int32 InGenerationCount, int32& OutYearsCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckEnablePeriodJump(bool& OutIsEnable) const;
    
    UFUNCTION(BlueprintCallable)
    void AddYearsCount(int32 InAddAgeNum);
    
    UFUNCTION(BlueprintCallable)
    void AddJumpPointAndPeriodJumpList(const TArray<FG01EventTriggerID>& InEventTriggerIdList, bool& OutIsJumped);
    
    UFUNCTION(BlueprintCallable)
    void AddJumpPointAndPeriodJump(const FG01EventTriggerID& InEventTriggerID, bool& OutIsJumped);
    
    UFUNCTION(BlueprintCallable)
    void AddEventPointAndPeriodJump(const FG01EventPointIDStruct& InEventPointID, const bool InAgeJump, bool& OutIsJumped);
    
    UFUNCTION(BlueprintCallable)
    void AddCurrentJumpPoint(const FG01EventTriggerID& InEventTriggerID);
    
};

