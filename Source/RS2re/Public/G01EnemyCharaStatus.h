#pragma once
#include "CoreMinimal.h"
#include "G01CharaStatus.h"
#include "G01EnemyCharaStatus.generated.h"

USTRUCT(BlueprintType)
struct FG01EnemyCharaStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharaStatus MStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharaStatus MRiseStatus;
    
    RS2RE_API FG01EnemyCharaStatus();
};

