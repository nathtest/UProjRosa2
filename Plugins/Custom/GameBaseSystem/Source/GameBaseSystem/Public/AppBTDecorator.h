#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "BehaviorTree/BTDecorator.h"
#include "AppBTDecorator.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API UAppBTDecorator : public UBTDecorator {
    GENERATED_BODY()
public:
    UAppBTDecorator();

};

