#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator_Blackboard -FallbackName=BTDecorator_Blackboard
#include "BehaviorTree/Decorators/BTDecorator_Blackboard.h"
#include "AppBTBBDecorator.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API UAppBTBBDecorator : public UBTDecorator_Blackboard {
    GENERATED_BODY()
public:
    UAppBTBBDecorator();

};

