#pragma once
#include "CoreMinimal.h"
#include "SaveDataUserSubsystemBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataUserSubsystemBase -FallbackName=SaveDataUserSubsystemBase
#include "G01EventTriggerID.h"
#include "G01PeriodSaveInfo.h"
#include "G01PeriodSubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01PeriodSubsystem : public USaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01PeriodSaveInfo PeriodSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnablePeriodJump;
    
public:
    UG01PeriodSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetTotalJumpPoint(const int32& InPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetRankPoint(const int32& InPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetEnablePeriodJump(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentJumpPoint(const int32& InPoint);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalJumpPoint() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRankPoint();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPreJumpPoint() const;
    
    UFUNCTION(BlueprintCallable)
    FG01PeriodSaveInfo GetPeriodSaveData() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FG01EventTriggerID> GetEventTriggerIdList();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentJumpPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckEnablePeriodJump(bool& OutIsEnable) const;
    
    UFUNCTION(BlueprintCallable)
    void AddEventTriggerId(FG01EventTriggerID InID);
    
};

