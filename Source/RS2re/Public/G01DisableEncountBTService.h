#pragma once
#include "CoreMinimal.h"
#include "AppBTService.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTService -FallbackName=AppBTService
#include "G01DisableEncountBTService.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01DisableEncountBTService : public UAppBTService {
    GENERATED_BODY()
public:
    UG01DisableEncountBTService();

};

