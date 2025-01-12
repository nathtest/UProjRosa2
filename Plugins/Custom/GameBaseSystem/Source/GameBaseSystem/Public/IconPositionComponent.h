#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "IconPositionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UIconPositionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UIconPositionComponent(const FObjectInitializer& ObjectInitializer);

};

