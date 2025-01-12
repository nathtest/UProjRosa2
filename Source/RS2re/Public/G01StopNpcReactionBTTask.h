#pragma once
#include "CoreMinimal.h"
#include "AppBTTask.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTTask -FallbackName=AppBTTask
#include "G01StopNpcReactionBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01StopNpcReactionBTTask : public UAppBTTask {
    GENERATED_BODY()
public:
    UG01StopNpcReactionBTTask();

};

