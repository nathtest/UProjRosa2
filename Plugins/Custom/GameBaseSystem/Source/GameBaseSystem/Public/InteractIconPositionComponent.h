#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "InteractIconPositionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UInteractIconPositionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UInteractIconPositionComponent(const FObjectInitializer& ObjectInitializer);

};

