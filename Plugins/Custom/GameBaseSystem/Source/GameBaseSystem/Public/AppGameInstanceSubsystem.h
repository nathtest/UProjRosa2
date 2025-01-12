#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "AppGameInstanceSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API UAppGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAppGameInstanceSubsystem();

};

