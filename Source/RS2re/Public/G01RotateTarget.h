#pragma once
#include "CoreMinimal.h"
#include "RotateTargetBase_StandardAISystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=StandardAISystem -ObjectName=RotateTargetBase_StandardAISystem -FallbackName=RotateTargetBase_StandardAISystem
#include "G01RotateTarget.generated.h"

class AGeneratorBase;

UCLASS(Blueprintable)
class RS2RE_API AG01RotateTarget : public ARotateTargetBase_StandardAISystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AGeneratorBase>> ReferredGenerators;
    
public:
    AG01RotateTarget(const FObjectInitializer& ObjectInitializer);

};

