#pragma once
#include "CoreMinimal.h"
#include "G01BattleEscapeExpressionStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEscapeExpressionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExpressionBackAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingTurnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExpressionBPDeficiency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExpressionPresetSetting;
    
    FG01BattleEscapeExpressionStruct();
};

