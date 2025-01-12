#include "G01QCondEmperorSuccession.h"
#include "G01PartyManagerAccessor.h"

UG01QCondEmperorSuccession::UG01QCondEmperorSuccession() {
    this->PartyManagerAccessor = CreateDefaultSubobject<UG01PartyManagerAccessor>(TEXT("PartyManagerAccessor"));
}


