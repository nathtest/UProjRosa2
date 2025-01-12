#pragma once
#include "CoreMinimal.h"
#include "G01LipSyncLoadedRessources.h"
#include "G01OnLipSyncLoadCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FG01OnLipSyncLoadCompleted, const FG01LipSyncLoadedRessources&, InResouces);

