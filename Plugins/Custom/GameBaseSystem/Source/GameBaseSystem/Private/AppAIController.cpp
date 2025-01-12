#include "AppAIController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BehaviorTreeComponent -FallbackName=BehaviorTreeComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardComponent -FallbackName=BlackboardComponent
#include "BehaviorTree/BlackboardComponent.h"

AAppAIController::AAppAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
    this->BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
    this->BehaviorTree = NULL;
}

void AAppAIController::SetupBlackboardParam_Implementation() {
}

void AAppAIController::EnableTick_Implementation(bool InEnable) {
}


