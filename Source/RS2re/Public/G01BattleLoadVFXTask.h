#pragma once
#include "CoreMinimal.h"
#include "G01BattleLoadVFXTaskInf.h"
#include "G01BattleTask.h"
#include "G01BattleLoadVFXTask.generated.h"

class UG01VFXHandle;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleLoadVFXTask : public UG01BattleTask, public IG01BattleLoadVFXTaskInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01VFXHandle* VfxHandle;
    
public:
    UG01BattleLoadVFXTask();


    // Fix for true pure virtual functions not being implemented
};

