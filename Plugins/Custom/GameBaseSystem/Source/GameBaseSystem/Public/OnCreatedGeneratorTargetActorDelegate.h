#pragma once
#include "CoreMinimal.h"
#include "OnCreatedGeneratorTargetActorDelegate.generated.h"

class AActor;
class AGeneratorBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreatedGeneratorTargetActor, AGeneratorBase*, InGenerator, AActor*, InCreatedActor);

