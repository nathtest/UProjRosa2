#pragma once
#include "CoreMinimal.h"
#include "FlagSubsystemHelper.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSubsystemHelper -FallbackName=FlagSubsystemHelper
#include "G01FlagSubsystemHelper.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01FlagSubsystemHelper : public UFlagSubsystemHelper {
    GENERATED_BODY()
public:
    UG01FlagSubsystemHelper();

};

