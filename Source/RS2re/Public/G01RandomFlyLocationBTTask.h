#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "AppBTTask.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTTask -FallbackName=AppBTTask
#include "G01RandomFlyLocationBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01RandomFlyLocationBTTask : public UAppBTTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector FlyLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Hight;
    
    UG01RandomFlyLocationBTTask();

};

