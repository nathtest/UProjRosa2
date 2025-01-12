#pragma once
#include "CoreMinimal.h"
#include "AppBTTask.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTTask -FallbackName=AppBTTask
#include "G01ChangeDefaultOverlapCollisionBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01ChangeDefaultOverlapCollisionBTTask : public UAppBTTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableCollision;
    
    UG01ChangeDefaultOverlapCollisionBTTask();

};

