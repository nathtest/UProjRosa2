#include "FlagSystemManagerAccessCompo.h"
#include "EManagerID.h"

UFlagSystemManagerAccessCompo::UFlagSystemManagerAccessCompo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_FLAGSYSTEM;
}

void UFlagSystemManagerAccessCompo::SetFlag(const FFlagAccessParam& InAccessParam, bool InSetValue) {
}

bool UFlagSystemManagerAccessCompo::GetFlag(const FFlagAccessParam& InAccessParam) {
    return false;
}

FFlagAccessParam UFlagSystemManagerAccessCompo::CreateFlagAccessParam(FFlagIDListViewStruct InFlagID) {
    return FFlagAccessParam{};
}


