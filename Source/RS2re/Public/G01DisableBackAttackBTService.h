#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTService -FallbackName=AppBTService
#include "AppBTService.h"
#include "G01DisableBackAttackBTService.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01DisableBackAttackBTService : public UAppBTService {
    GENERATED_BODY()
public:
    UG01DisableBackAttackBTService();

};

