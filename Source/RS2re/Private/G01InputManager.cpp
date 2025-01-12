#include "G01InputManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ObserverSubjectComponent -FallbackName=ObserverSubjectComponent
#include "G01GameSystemDataManagerAccessor.h"

AG01InputManager::AG01InputManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObserverSubject = CreateDefaultSubobject<UObserverSubjectComponent>(TEXT("ObserverSubject"));
    this->GameSystemDataManagerAccessor = CreateDefaultSubobject<UG01GameSystemDataManagerAccessor>(TEXT("GameSystemDataManagerAccessor"));
}


