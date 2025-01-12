#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01MapAspectHolderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01MapAspectHolderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UG01MapAspectHolderComponent(const FObjectInitializer& ObjectInitializer);

};

