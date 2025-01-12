#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "BehaviorTree/BTService.h"
#include "AppBTService.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API UAppBTService : public UBTService {
    GENERATED_BODY()
public:
    UAppBTService();

};

