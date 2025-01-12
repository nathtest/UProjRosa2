#pragma once
#include "CoreMinimal.h"
#include "AppBTTask.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTTask -FallbackName=AppBTTask
#include "EAISpeed.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAISpeed -FallbackName=EAISpeed
#include "G01ChangeMoveSpeedBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01ChangeMoveSpeedBTTask : public UAppBTTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAISpeed MoveSpeed;
    
    UG01ChangeMoveSpeedBTTask();

};

