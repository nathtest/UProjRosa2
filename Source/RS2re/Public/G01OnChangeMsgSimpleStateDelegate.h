#pragma once
#include "CoreMinimal.h"
#include "G01OnChangeMsgSimpleStateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FG01OnChangeMsgSimpleState, AActor*, InUser);

