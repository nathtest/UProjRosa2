#pragma once
#include "CoreMinimal.h"
#include "AppBTTask.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTTask -FallbackName=AppBTTask
#include "G01ChangeMiniMapEnemyDispBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01ChangeMiniMapEnemyDispBTTask : public UAppBTTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UiDisp;
    
    UG01ChangeMiniMapEnemyDispBTTask();

};

