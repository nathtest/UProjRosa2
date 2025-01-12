#pragma once
#include "CoreMinimal.h"
#include "G01EnemyAIControllerBase.h"
#include "G01CrowdEnemyAIControllerBase.generated.h"

class AG01CrowdActionDirectorBase;

UCLASS(Blueprintable)
class RS2RE_API AG01CrowdEnemyAIControllerBase : public AG01EnemyAIControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01CrowdActionDirectorBase* ActionDirector;
    
public:
    AG01CrowdEnemyAIControllerBase(const FObjectInitializer& ObjectInitializer);

};

