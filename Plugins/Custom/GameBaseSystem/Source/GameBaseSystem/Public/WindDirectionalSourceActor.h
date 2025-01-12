#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WindDirectionalSource -FallbackName=WindDirectionalSource
#include "Engine/WindDirectionalSource.h"
#include "WindDirectionalSourceActor.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AWindDirectionalSourceActor : public AWindDirectionalSource {
    GENERATED_BODY()
public:
    AWindDirectionalSourceActor(const FObjectInitializer& ObjectInitializer);

};

