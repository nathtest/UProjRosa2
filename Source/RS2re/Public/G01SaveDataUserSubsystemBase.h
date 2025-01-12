#pragma once
#include "CoreMinimal.h"
#include "SaveDataUserSubsystemBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataUserSubsystemBase -FallbackName=SaveDataUserSubsystemBase
#include "SaveDataUserSubsystemBase.h"
#include "G01SaveDataUserSubsystemBase.generated.h"

UCLASS(Abstract, Blueprintable)
class RS2RE_API UG01SaveDataUserSubsystemBase : public USaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
    UG01SaveDataUserSubsystemBase();

};

