#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AIMoveSplineInfo.h"
#include "SplineMoveComponent_StandardAISystem.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STANDARDAISYSTEM_API USplineMoveComponent_StandardAISystem : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIMoveSplineInfo MSplineInfo;
    
public:
    USplineMoveComponent_StandardAISystem(const FObjectInitializer& ObjectInitializer);

};

