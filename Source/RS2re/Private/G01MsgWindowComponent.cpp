#include "G01MsgWindowComponent.h"
#include "NavAreas/NavArea_Obstacle.h" //CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea_Obstacle -FallbackName=NavArea_Obstacle

UG01MsgWindowComponent::UG01MsgWindowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Obstacle::StaticClass();
}


