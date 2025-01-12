#pragma once
#include "CoreMinimal.h"
#include "G01BattlePlaySequenceTaskInf.h"
#include "G01BattleTask.h"
#include "G01BattleFathomInspirationTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01BattleFathomInspirationTask : public UG01BattleTask, public IG01BattlePlaySequenceTaskInf {
    GENERATED_BODY()
public:
    UG01BattleFathomInspirationTask();


    // Fix for true pure virtual functions not being implemented
};

