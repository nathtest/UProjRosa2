#pragma once
#include "CoreMinimal.h"
#include "AppBTService.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTService -FallbackName=AppBTService
#include "G01EnableUniqueSenseBTService.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01EnableUniqueSenseBTService : public UAppBTService {
    GENERATED_BODY()
public:
    UG01EnableUniqueSenseBTService();

};

