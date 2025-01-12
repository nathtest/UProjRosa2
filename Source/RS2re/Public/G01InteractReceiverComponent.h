#pragma once
#include "CoreMinimal.h"
#include "InteractReceiverComponent.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=InteractReceiverComponent -FallbackName=InteractReceiverComponent
#include "G01InteractReceiverComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01InteractReceiverComponent : public UInteractReceiverComponent {
    GENERATED_BODY()
public:
    UG01InteractReceiverComponent(const FObjectInitializer& ObjectInitializer);

};

