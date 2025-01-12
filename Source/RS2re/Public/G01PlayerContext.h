#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h" //CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "G01PlayerContext.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RS2RE_API UG01PlayerContext : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UG01PlayerContext();

};

