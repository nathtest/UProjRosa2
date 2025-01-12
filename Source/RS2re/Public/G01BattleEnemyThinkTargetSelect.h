#pragma once
#include "CoreMinimal.h"
#include "G01BattleEnemyThinkBase.h"
#include "G01BattleEnemyThinkTargetSelect.generated.h"

class UG01BattleCharacterHandle;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleEnemyThinkTargetSelect : public UG01BattleEnemyThinkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName PriorityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ScoreList;
    
public:
    UG01BattleEnemyThinkTargetSelect();

    UFUNCTION(BlueprintCallable)
    void GetScoreList(TArray<int32>& OutScoreList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPriorityId(FName& OutPriorityId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_BE_CalcSelectScore(FName InArtsID, UG01BattleCharacterHandle* InTarget, int32& OutScore);
    
};

