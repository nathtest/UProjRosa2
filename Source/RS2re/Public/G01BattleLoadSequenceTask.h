#pragma once
#include "CoreMinimal.h"
#include "G01BattleLoadSequenceTaskInf.h"
#include "G01BattleTask.h"
#include "G01BattleLoadSequenceTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01BattleLoadSequenceTask : public UG01BattleTask, public IG01BattleLoadSequenceTaskInf {
    GENERATED_BODY()
public:
    UG01BattleLoadSequenceTask();


    // Fix for true pure virtual functions not being implemented
};

