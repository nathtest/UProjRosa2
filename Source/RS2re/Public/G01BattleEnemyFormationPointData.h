#pragma once
#include "CoreMinimal.h"
#include "G01BattleEnemyFormationPointData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEnemyFormationPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColonyGroupNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChoiceWeightSizeXL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChoiceWeightSizeLL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChoiceWeightSizeL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChoiceWeightSizeM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChoiceWeightSizeS;
    
    FG01BattleEnemyFormationPointData();
};

