#pragma once
#include "CoreMinimal.h"
#include "AppBTTask.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTTask -FallbackName=AppBTTask
#include "G01ChangeEnableUniqueAnimBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01ChangeEnableUniqueAnimBTTask : public UAppBTTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableUniqueAnim;
    
    UG01ChangeEnableUniqueAnimBTTask();

};

