#include "G01BattleField.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomInfoComponent -FallbackName=RoomInfoComponent
#include "G01BattleManagerAccessor.h"
#include "Templates/SubclassOf.h"

AG01BattleField::AG01BattleField(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseMapAspectEffect = true;
    this->MMapAspectEffectClass = NULL;
    this->BattleManagerAccessor = CreateDefaultSubobject<UG01BattleManagerAccessor>(TEXT("BattleManagerAccessor"));
    this->RoomInfo = CreateDefaultSubobject<URoomInfoComponent>(TEXT("RoomInfo"));
}

void AG01BattleField::ShowBgModel() {
}

void AG01BattleField::SettingPartyFormationData(const TArray<FG01BattlePartyFormationTableRow>& InMainFormationList, const TArray<FG01BattlePartyFormationTableRow>& InSubFormationList, const TArray<FG01BattlePartyFormationTableRow>& InBreakFormationList, bool& ReSuccess) {
}

void AG01BattleField::SettingEnemyFormationData(TSubclassOf<AG01BattleFormation> InFormationClass, bool& ReSuccess) {
}

void AG01BattleField::SetTableParam(const FG01BattleFieldParamTableRow& InParam) {
}

void AG01BattleField::SetPartyTeamDirection(const FTransform& InTransform) {
}

void AG01BattleField::SetPartyDownCount(int32 InDefeatCount) {
}

void AG01BattleField::SetMapAspectFxVisibility(bool Invisible) {
}

void AG01BattleField::SetMapAspectEffect(EG01MapAspectType InMapAspect) {
}

void AG01BattleField::SetFormationFxVisibility(bool Invisible) {
}

void AG01BattleField::SetEnemyTeamDirection(const FTransform& InTransform) {
}

void AG01BattleField::SetBreakPartyFormation(bool InIsBreak) {
}

void AG01BattleField::SelectPartyFormation(bool InToMain) {
}

void AG01BattleField::PrepareMapAspectEffect(EG01MapAspectType InMapAspectType) {
}



void AG01BattleField::OnRelocateBattleField() {
}



void AG01BattleField::OnChangeAlivePartyList(const TArray<AActor*>& InActorList) {
}

void AG01BattleField::OnChangeAliveEnemyList(const TArray<AActor*>& InActorList) {
}

void AG01BattleField::IsBreakedPartyFormation(bool& ReIsBreaked) {
}

void AG01BattleField::InitializeForEscape() {
}

void AG01BattleField::InitializeForBattle() {
}

void AG01BattleField::HideBgModel() {
}

void AG01BattleField::GetPartyTeamDirection(FTransform& Re) {
}


void AG01BattleField::GetPartyMainFormationData(FG01BattlePartyFormationTableRow& Re) {
}

void AG01BattleField::GetPartyFormationPointList(TArray<AG01FormationPoint*>& ReFormationList) {
}


void AG01BattleField::GetPartyFormationData(FG01BattlePartyFormationTableRow& Re) {
}

void AG01BattleField::GetPartyFormation(AG01BattleFormation*& ReFormation) {
}

void AG01BattleField::GetIsShipBattle(bool& Out) {
}

void AG01BattleField::GetInitialMapAspectFlow(FG01MapAspectFlowKeyStruct& Out) {
}


void AG01BattleField::GetEnemyTeamDirection(FTransform& Re) {
}


void AG01BattleField::GetEnemyFormationPointList(TArray<AG01FormationPoint*>& ReFormationList) {
}


void AG01BattleField::GetEnemyFormation(AG01BattleFormation*& ReFormation) {
}

void AG01BattleField::GetBattleFieldId(FName& Re) {
}

void AG01BattleField::Clear() {
}


