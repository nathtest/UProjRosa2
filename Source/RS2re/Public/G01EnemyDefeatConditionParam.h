#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "QuestConditionParamBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionParamBase -FallbackName=QuestConditionParamBase
#include "EG01QCEnemyDefeatCheckSpace.h"
#include "EG01QCEnemyDefeatCheckType.h"
#include "EG01QCEnemyDefeatTargetNumType.h"
#include "G01EnemyDefeatConditionParam.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct RS2RE_API FG01EnemyDefeatConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefeatNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EG01QCEnemyDefeatCheckType CheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EG01QCEnemyDefeatCheckSpace CheckSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> CheckWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EG01QCEnemyDefeatTargetNumType TargetNumType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSoftClassPath TargetSoftClassPath;
    
    FG01EnemyDefeatConditionParam();
};

