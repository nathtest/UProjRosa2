#include "G01BattleArtsTableRow.h"

FG01BattleArtsTableRow::FG01BattleArtsTableRow() {
    this->MArtsType = EG01BattleArtsType::None;
    this->MBpCost = 0;
    this->MPower = 0;
    this->PowerForEnemy = 0;
    this->MHitCount = 0;
    this->MIsShoot = false;
    this->MIsForceHit = false;
    this->MHitAccuracy = 0;
    this->MHitCorrection = 0;
    this->MarkCaution = false;
    this->MBaseSpeed = 0;
    this->MIsFastTrick = false;
    this->MIsDelayAction = false;
    this->MIsNormalArts = false;
    this->MIsLinkable = false;
    this->ExcludeAtConfuse = false;
    this->ExcludeAtAutoCommand = false;
    this->IsRecoverAtAutoCommand = false;
    this->IsNearDistance = false;
    this->IsOverDriveGaugeAdd = false;
    this->LinkCommandScore = 0;
    this->MapAspectChangePercent = 0;
    this->MapAspectOverride = false;
    this->MTargetSelect = EG01BattleArtsTargetSelection::Near;
    this->MTargetFilter = EG01BattleArtsTargetFilter::None;
    this->MTargetRange = EG01BattleArtsTargetRange::Single;
    this->MTargetRangeRadius = 0.00f;
    this->MInvolveFilter = EG01BattleArtsInvolveFilter::None;
    this->MDeflectAvoid = false;
    this->MDeflectCounter = false;
    this->MDeflectPhysicSheild = false;
    this->MDeflectMagicSheild = false;
    this->MFathomDifficult = 0;
    this->MAvailableBeforeSheild = false;
    this->MAvailableBeforeGuarder = false;
    this->MAvailableAfterSheild = false;
    this->MAvailableAfterGuarder = false;
    this->MRank = 0;
    this->RankUpRefLevel = EG01BattleArtsRefLevel::None;
    this->RankUpLevelBorder = 0;
    this->DamageFlucValueMinRevise = 0;
    this->DamageFlucValueMaxRevise = 0;
    this->DamageFlucRateMinRevise = 0;
    this->DamageFlucRateMaxRevise = 0;
    this->LinkDamageFlucValueMinRevise = 0;
    this->LinkDamageFlucValueMaxRevise = 0;
    this->LinkDamageFlucRateMinRevise = 0;
    this->LinkDamageFlucRateMaxRevise = 0;
    this->LearnDamageFlucValueMinRevise = 0;
    this->LearnDamageFlucValueMaxRevise = 0;
    this->LearnDamageFlucRateMinRevise = 0;
    this->LearnDamageFlucRateMaxRevise = 0;
}

