#pragma once
#include "CoreMinimal.h"
#include "AppBTTask.h"
#include "AIBTAutoChangeSpeed.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UAIBTAutoChangeSpeed : public UAppBTTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MSpeedRate;
    
    UAIBTAutoChangeSpeed();

};

