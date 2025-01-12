#pragma once
#include "CoreMinimal.h"
#include "LoadedAnimMontageCallBackDelegate.generated.h"

class UAnimMontage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLoadedAnimMontageCallBack, UAnimMontage*, InLoadedAnimMontage);

