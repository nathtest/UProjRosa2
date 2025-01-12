#pragma once
#include "CoreMinimal.h"
#include "EG01BattleEnemyCommandTable.h"
#include "G01BattleEnemyThinkBase.h"
#include "G01BattleEnemyThinkTableRoutine.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01BattleEnemyThinkTableRoutine : public UG01BattleEnemyThinkBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WeightList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TurnAtReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TurnFromReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommandCountFromReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionCountFromReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommandCountInTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionCountInTurn;
    
public:
    UG01BattleEnemyThinkTableRoutine();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BE_TurnFromReset(int32& OutTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_BE_SelectTable(EG01BattleEnemyCommandTable& OutTable);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_BE_RandomSelectByWeight(EG01BattleEnemyCommandTable& OutTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BE_CommandCountInTurn(int32& OutCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BE_CommandCountFromReset(int32& OutCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BE_ActionCountInTurn(int32& OutCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BE_ActionCountFromReset(int32& OutCount);
    
};

