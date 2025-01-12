#include "G01SeqWeaponControllerBinder.h"
#include "G01ItemManagerAccessor.h"
#include "G01PartyManagerAccessor.h"

AG01SeqWeaponControllerBinder::AG01SeqWeaponControllerBinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PartyManagerAccessor = CreateDefaultSubobject<UG01PartyManagerAccessor>(TEXT("PartyManagerAccessor"));
    this->ItemManagerAccessor = CreateDefaultSubobject<UG01ItemManagerAccessor>(TEXT("ItemManagerAccessor"));
    this->WeaponVisualActor = NULL;
}


