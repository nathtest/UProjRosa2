#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01PartyEquipComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01PartyEquipComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UG01PartyEquipComponent(const FObjectInitializer& ObjectInitializer);

};

