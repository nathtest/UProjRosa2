#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "SeqActorDefaultLookComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API USeqActorDefaultLookComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USeqActorDefaultLookComponent(const FObjectInitializer& ObjectInitializer);

};

