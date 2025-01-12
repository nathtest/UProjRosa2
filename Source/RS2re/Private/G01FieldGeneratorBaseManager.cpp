#include "G01FieldGeneratorBaseManager.h"

AG01FieldGeneratorBaseManager::AG01FieldGeneratorBaseManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsDebugDisp = true;
    this->IsBattle = false;
}


bool AG01FieldGeneratorBaseManager::GetDebugDispAll() {
    return false;
}


