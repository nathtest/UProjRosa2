#pragma once
#include "CoreMinimal.h"
#include "AppGameInstanceSubsystem.h"
#include "SaveDataUserSubsystemBase.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API USaveDataUserSubsystemBase : public UAppGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USaveDataUserSubsystemBase();

};

