#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "Components/SplineComponent.h"
#include "AIMoveSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UAIMoveSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UAIMoveSplineComponent(const FObjectInitializer& ObjectInitializer);

};

