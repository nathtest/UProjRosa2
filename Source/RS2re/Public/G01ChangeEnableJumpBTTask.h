#pragma once
#include "CoreMinimal.h"
#include "AppBTTask.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTTask -FallbackName=AppBTTask
#include "G01ChangeEnableJumpBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01ChangeEnableJumpBTTask : public UAppBTTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableJump;
    
    UG01ChangeEnableJumpBTTask();

};

