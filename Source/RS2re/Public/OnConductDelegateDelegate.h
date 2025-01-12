#pragma once
#include "CoreMinimal.h"
#include "G01ConductCacheStruct.h"
#include "OnConductDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConductDelegate, const FG01ConductCacheStruct&, InCurrnets);

