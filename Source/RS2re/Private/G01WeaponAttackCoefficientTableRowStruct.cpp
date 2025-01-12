#include "G01WeaponAttackCoefficientTableRowStruct.h"

UG01WeaponAttackCoefficientTableRowStruct::UG01WeaponAttackCoefficientTableRowStruct() {
    this->SwordSkill = 0.00f;
    this->GreatSwordSkill = 0.00f;
    this->ShortSwordSkill = 0.00f;
    this->SpearSkill = 0.00f;
    this->AxeSkill = 0.00f;
    this->ClubSkill = 0.00f;
    this->BowSkill = 0.00f;
    this->MartialSkill = 0.00f;
    this->EnemySkill = 0.00f;
    this->Pyrology = 0.00f;
    this->Hydrology = 0.00f;
    this->Terrology = 0.00f;
    this->Aerology = 0.00f;
    this->Cosmology = 0.00f;
    this->Umbrology = 0.00f;
    this->PyroTerrology = 0.00f;
    this->PyroAerology = 0.00f;
    this->HydroTerrology = 0.00f;
    this->HydroAerology = 0.00f;
    this->CosmoPyrology = 0.00f;
    this->CosmoHydrology = 0.00f;
    this->CosmoTerrology = 0.00f;
    this->CosmoAerology = 0.00f;
    this->UmbroPyrology = 0.00f;
    this->UmbroHydrology = 0.00f;
    this->UmbroTerrology = 0.00f;
    this->UmbroAerology = 0.00f;
}

float UG01WeaponAttackCoefficientTableRowStruct::GetCoefficient(EG01BattleArtsType InType) {
    return 0.0f;
}


