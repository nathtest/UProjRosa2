#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "SeqActorBinderRootComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API USeqActorBinderRootComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USeqActorBinderRootComponent(const FObjectInitializer& ObjectInitializer);

};

