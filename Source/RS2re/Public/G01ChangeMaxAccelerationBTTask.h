#pragma once
#include "CoreMinimal.h"
#include "AppBTTask.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTTask -FallbackName=AppBTTask
#include "EG01MaxAccelerationEnum.h"
#include "G01ChangeMaxAccelerationBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01ChangeMaxAccelerationBTTask : public UAppBTTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01MaxAccelerationEnum MaxAccelerationType;
    
    UG01ChangeMaxAccelerationBTTask();

};

