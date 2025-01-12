#pragma once
#include "CoreMinimal.h"
#include "AppGameInstanceSubsystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppGameInstanceSubsystem -FallbackName=AppGameInstanceSubsystem
#include "G01AbilitySubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01AbilitySubsystem : public UAppGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UG01AbilitySubsystem();

};

