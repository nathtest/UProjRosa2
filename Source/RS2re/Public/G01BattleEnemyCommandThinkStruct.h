#pragma once
#include "CoreMinimal.h"
#include "G01BattleEnemyCommandThinkStruct.generated.h"

class UG01BattleEnemyThinkPatternChange;
class UG01BattleEnemyThinkTableRoutine;
class UG01BattleEnemyThinkTargetSelect;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEnemyCommandThinkStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01BattleEnemyThinkPatternChange*> PatternChangeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleEnemyThinkTableRoutine* TableRoutine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01BattleEnemyThinkTargetSelect*> TableATargetSelectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01BattleEnemyThinkTargetSelect*> TableBTargetSelectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01BattleEnemyThinkTargetSelect*> TableEXTargetSelectList;
    
    FG01BattleEnemyCommandThinkStruct();
};

