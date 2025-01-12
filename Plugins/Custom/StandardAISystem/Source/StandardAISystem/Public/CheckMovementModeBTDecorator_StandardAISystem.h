#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "CheckMovementModeBTDecorator_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UCheckMovementModeBTDecorator_StandardAISystem : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> LandMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> WaterMovementMode;
    
public:
    UCheckMovementModeBTDecorator_StandardAISystem();

};

