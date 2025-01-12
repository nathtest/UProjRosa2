#pragma once
#include "CoreMinimal.h"
#include "GamePlayDataSubsystemHelper.h"  //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GamePlayDataSubsystemHelper -FallbackName=GamePlayDataSubsystemHelper
#include "G01GamePlayDataSubsystemHelper.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01GamePlayDataSubsystemHelper : public UGamePlayDataSubsystemHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ImperialForcePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalBattleCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalBattleWinCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalBattleLoseCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalBattleEscapeCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PeriodBattleCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalBattleWinCountMaxOfTrial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CrownMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IncomeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeepBossRecordID;
    
    UG01GamePlayDataSubsystemHelper();

};

