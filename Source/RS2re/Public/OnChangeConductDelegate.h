#pragma once
#include "CoreMinimal.h"
#include "G01ConductCacheStruct.h"
#include "OnChangeConductDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnChangeConduct, const FG01ConductCacheStruct&, InCurrnet);

