#pragma once
#include "CoreMinimal.h"
#include "G01BattleEnemyEnhanceFindKey.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEnemyEnhanceFindKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnhanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleCharaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceLevel;
    
    FG01BattleEnemyEnhanceFindKey();
};

