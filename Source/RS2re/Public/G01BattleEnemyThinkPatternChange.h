#pragma once
#include "CoreMinimal.h"
#include "G01BattleEnemyCommandChange.h"
#include "G01BattleEnemyThinkBase.h"
#include "G01BattleEnemyThinkPatternChange.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01BattleEnemyThinkPatternChange : public UG01BattleEnemyThinkBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleEnemyCommandChange ChangeData;
    
public:
    UG01BattleEnemyThinkPatternChange();

    UFUNCTION(BlueprintCallable)
    void SetChangeData(const FG01BattleEnemyCommandChange& InChangeData);
    
    UFUNCTION(BlueprintCallable)
    void DoJudge(bool& Out);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BE_ParamValue(int32& OutParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BE_ParamName(FName& OutParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_BE_Check(bool& OutChange);
    
};

