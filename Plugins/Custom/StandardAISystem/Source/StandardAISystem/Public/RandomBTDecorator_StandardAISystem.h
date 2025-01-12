#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "RandomBTDecorator_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API URandomBTDecorator_StandardAISystem : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MRandomRate;
    
    URandomBTDecorator_StandardAISystem();

};

