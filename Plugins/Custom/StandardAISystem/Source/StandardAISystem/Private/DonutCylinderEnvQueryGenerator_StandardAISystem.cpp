#include "DonutCylinderEnvQueryGenerator_StandardAISystem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UDonutCylinderEnvQueryGenerator_StandardAISystem::UDonutCylinderEnvQueryGenerator_StandardAISystem() {
    this->bUseSpiralPattern = false;
    this->Center = UEnvQueryContext_Querier::StaticClass();
    this->bDefineArc = false;
    this->DonutNum = 3;
}


