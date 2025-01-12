#pragma once
#include "CoreMinimal.h"
#include "G01BattleArtsTaskInf.h"
#include "G01BattleTask.h"
#include "G01BattleArtsTask.generated.h"

class AG01SequenceControllerBase;
class UG01ArtsScriptBase;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleArtsTask : public UG01BattleTask, public IG01BattleArtsTaskInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01SequenceControllerBase* ArtsSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01ArtsScriptBase* ArtsScript;
    
public:
    UG01BattleArtsTask();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckLoadedBP();
    

    // Fix for true pure virtual functions not being implemented
};

