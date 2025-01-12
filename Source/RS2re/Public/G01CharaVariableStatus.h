#pragma once
#include "CoreMinimal.h"
#include "G01CharaVariableStatus.generated.h"

USTRUCT(BlueprintType)
struct FG01CharaVariableStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MHitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MLifePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MBattlePoint;
    
    RS2RE_API FG01CharaVariableStatus();
};

