#include "LevelObjectFinder.h"
#include "EManagerID.h"

ALevelObjectFinder::ALevelObjectFinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_LVOBJFINDER;
    this->MAccessInfoTable = NULL;
}


