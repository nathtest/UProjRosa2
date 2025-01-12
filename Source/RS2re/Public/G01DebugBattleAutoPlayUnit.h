#pragma once
#include "CoreMinimal.h"
#include "G01DebugBattleAutoPlayUnit.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01DebugBattleAutoPlayUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArtsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopNum;
    
    FG01DebugBattleAutoPlayUnit();
};

