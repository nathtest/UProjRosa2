#pragma once
#include "CoreMinimal.h"
#include "FlagSubsystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSubsystem -FallbackName=FlagSubsystem
#include "G01FlagSubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01FlagSubsystem : public UFlagSubsystem {
    GENERATED_BODY()
public:
    UG01FlagSubsystem();

};

