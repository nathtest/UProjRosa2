#pragma once
#include "CoreMinimal.h"
#include "BattleStatusStoreParamHP.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FBattleStatusStoreParamHP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHp;
    
    FBattleStatusStoreParamHP();
};

