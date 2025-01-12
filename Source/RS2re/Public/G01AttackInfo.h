#pragma once
#include "CoreMinimal.h"
#include "EG01AttackActionType.h"
#include "G01AttackInfo.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AttackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01AttackActionType MActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MActionID;
    
    FG01AttackInfo();
};

