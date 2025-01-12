#pragma once
#include "CoreMinimal.h"
#include "AppBTTask.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTTask -FallbackName=AppBTTask
#include "G01ChangeDefaultAIStateBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01ChangeDefaultAIStateBTTask : public UAppBTTask {
    GENERATED_BODY()
public:
    UG01ChangeDefaultAIStateBTTask();

};

