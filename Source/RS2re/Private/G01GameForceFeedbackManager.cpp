#include "G01GameForceFeedbackManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ObserverSubjectComponent -FallbackName=ObserverSubjectComponent
#include "G01GameSystemDataManagerAccessor.h"

AG01GameForceFeedbackManager::AG01GameForceFeedbackManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObserverSubjectComponent = CreateDefaultSubobject<UObserverSubjectComponent>(TEXT("ObserverSubjectComponent"));
    this->GameSystemDataManagerAccessor = CreateDefaultSubobject<UG01GameSystemDataManagerAccessor>(TEXT("GameSystemDataManagerAccessor"));
}


