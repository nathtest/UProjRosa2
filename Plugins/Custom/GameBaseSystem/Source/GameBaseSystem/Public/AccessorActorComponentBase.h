#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AccessorActorComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UAccessorActorComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UAccessorActorComponentBase(const FObjectInitializer& ObjectInitializer);

};

