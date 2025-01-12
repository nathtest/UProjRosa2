#include "GeneratePoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

AGeneratePoint::AGeneratePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MForwardArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ForwardArrow"));
    //this->MForwardArrow->SetupAttachment(RootComponent);
}


