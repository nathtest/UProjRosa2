#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "G01StatusPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01StatusPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UG01StatusPointComponent(const FObjectInitializer& ObjectInitializer);

};

