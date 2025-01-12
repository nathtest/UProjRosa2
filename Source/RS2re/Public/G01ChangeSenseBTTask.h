#pragma once
#include "CoreMinimal.h"
#include "AppBTTask.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTTask -FallbackName=AppBTTask
#include "ESenseType.h"
#include "G01ChangeSenseBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01ChangeSenseBTTask : public UAppBTTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESenseType SenseType;
    
    UG01ChangeSenseBTTask();

};

