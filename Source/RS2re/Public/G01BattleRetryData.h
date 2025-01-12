#pragma once
#include "CoreMinimal.h"
#include "EBtTransitionType.h"
#include "G01BattleData.h"
#include "G01BattleRetryData.generated.h"

USTRUCT(BlueprintType)
struct FG01BattleRetryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleData BattleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtTransitionType StartTransitionType;
    
    RS2RE_API FG01BattleRetryData();
};

