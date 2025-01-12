#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "G01NamePointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01NamePointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UG01NamePointComponent(const FObjectInitializer& ObjectInitializer);

};

