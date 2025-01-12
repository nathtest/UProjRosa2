#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01EventTriggerID.h"
#include "G01PeriodManagerInf.h"
#include "G01PeriodManager.generated.h"

class UDataTable;
class UG01GamePlayDataManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01PeriodManager : public AManagerBase, public IG01PeriodManagerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01GamePlayDataManagerAccessor* GamePlayDataManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrevGenerationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ElapsedPeriodInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EventTriggerTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxJumpPoint;
    
public:
    AG01PeriodManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SubYearsCount(int32 InSubAgeNum);
    
    UFUNCTION(BlueprintCallable)
    void SetYearsCount(int32 InAgeCount);
    
    UFUNCTION(BlueprintCallable)
    void SetTotalJumpPoint(int32 InPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetRankPoint(const int32 InPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetEnablePeriodJump(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentJumpPoint(int32 InPoint);
    
    UFUNCTION(BlueprintCallable)
    void ResetJumpPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PeriodJump(bool& OutIsJumped);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetYearsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPreYearsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetGenerationCount(int32& OutGenerationCount) const;
    
    UFUNCTION(BlueprintCallable)
    void GetEventTriggerIdList(TArray<FG01EventTriggerID>& OutIdList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetElapsedYears(int32 InBattleCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForcePeriodJump();
    
    UFUNCTION(BlueprintCallable)
    void Debug_ResetTotalJumpPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConvertYearsToGeneration(int32 InYearsCouunt, int32& OutGenerationCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConvertGenerationToYears(int32 InGenerationCount, int32& OutYearsCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckEnablePeriodJump(bool& OutIsEnable) const;
    
    UFUNCTION(BlueprintCallable)
    void AddYearsCount(int32 InAddAgeNum);
    
    UFUNCTION(BlueprintCallable)
    void AddEventTriggerId(FG01EventTriggerID InID);
    

    // Fix for true pure virtual functions not being implemented
};

