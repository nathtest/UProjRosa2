#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SplineBase_StandardAISystem.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API ASplineBase_StandardAISystem : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* MSplineComponent;
    
    ASplineBase_StandardAISystem(const FObjectInitializer& ObjectInitializer);

};

