#pragma once
#include "CoreMinimal.h"
#include "AppBTTask.h"
#include "ChangeSpeedInfo.h"
#include "AIBTChangeSpeedByDistance.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UAIBTChangeSpeedByDistance : public UAppBTTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChangeSpeedInfo> MChangeSpeedInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MNotHitSpeed;
    
    UAIBTChangeSpeedByDistance();

};

