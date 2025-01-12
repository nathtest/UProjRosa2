#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "G01MsgWindowComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01MsgWindowComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UG01MsgWindowComponent(const FObjectInitializer& ObjectInitializer);

};

