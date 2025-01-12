#pragma once
#include "CoreMinimal.h"
#include "OnDestroyGeneratorTargetActorDelegate.generated.h"

class AActor;
class AGeneratorBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDestroyGeneratorTargetActor, AGeneratorBase*, InGenerator, AActor*, InDestroyActor);

