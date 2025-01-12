#include "G01EnvSoundComponent.h"
#include "NavAreas/NavArea_Obstacle.h" //CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea_Obstacle -FallbackName=NavArea_Obstacle

UG01EnvSoundComponent::UG01EnvSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Obstacle::StaticClass();
}


