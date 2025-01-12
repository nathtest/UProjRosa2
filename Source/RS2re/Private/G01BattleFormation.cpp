#include "G01BattleFormation.h"
#include "Templates/SubclassOf.h"

AG01BattleFormation::AG01BattleFormation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MOptionTargetPointClass = NULL;
    this->VanishFxCurve = NULL;
    this->ReviveFxCurve = NULL;
    this->PointCountLimit = -1;
    this->MBasePoint = NULL;
}

void AG01BattleFormation::UpdatePointLookAt_Implementation(AG01BattleFormation* InOtherSide) {
}

void AG01BattleFormation::StartFxVanish_Implementation() {
}

void AG01BattleFormation::StartFxRevive_Implementation() {
}

void AG01BattleFormation::SortByName(TArray<AG01FormationPoint*>& InFormationPoints) {
}

void AG01BattleFormation::SetupFormationPointLine() {
}

void AG01BattleFormation::SetLineUnused(int32 InLineNo, bool InUnused) {
}

void AG01BattleFormation::SetFxVisibility(bool Invisible) {
}

void AG01BattleFormation::SetFormationPointList(TArray<AG01FormationPoint*>& InFormationPoints) {
}

void AG01BattleFormation::SetCompressUnusedLine(bool InEnableCompress) {
}

void AG01BattleFormation::OnLocatedBattleField_Implementation() {
}

void AG01BattleFormation::OnChangedCharacter_Implementation(const TArray<AActor*>& InActor) {
}

void AG01BattleFormation::MakeInclusionBox(const TArray<AActor*>& InActor, bool& ReSuccess, FBox& ReBox) {
}

void AG01BattleFormation::LookupFormationPoints(TArray<AG01FormationPoint*>& ReFormationPointList) {
}

void AG01BattleFormation::GetLineNum(int32& ReLineNum) {
}

void AG01BattleFormation::GetFormationPointTransform(int32 InPointNo, FTransform& OutTransform) {
}

void AG01BattleFormation::GetFormationPointList(TArray<AG01FormationPoint*>& ReFormationPoints) {
}

void AG01BattleFormation::GetElemNumForLine(int32 InLineNo, int32& ReElemNum) {
}

void AG01BattleFormation::GetCharacterCenterPoint(AActor*& RePointActor) {
}

void AG01BattleFormation::GetCenterPoint(AActor*& RePointActor) {
}

void AG01BattleFormation::FindOptionPoint(FName InPointLabel, AActor*& RePointActor, bool& ReFound) {
}

void AG01BattleFormation::FindNearestPoint(AG01FormationPoint* InPoint, int32 InLineNo, bool& ReSuccess, int32& ReIndex) {
}

void AG01BattleFormation::ConvertToIndex(int32 InLineNo, int32 InElemNo, bool& ReSuccess, int32& ReIndex) {
}

void AG01BattleFormation::ConvertFromIndex(int32 InIndex, bool& ReSuccess, int32& ReLineNo, int32& ReElemNo) {
}

void AG01BattleFormation::CollectFormationFx() {
}

void AG01BattleFormation::Cmd_SettingLineFx_Implementation(bool& OutFailed) {
}

void AG01BattleFormation::Cmd_SetLineFx(UNiagaraComponent* InLineFx, USceneComponent* InStartPoint, USceneComponent* InEndPoint) {
}

void AG01BattleFormation::CalcLineMoveDirection(int32 InLineFrom, int32 InLineTo, FVector& ReDir) {
}

void AG01BattleFormation::CalcCenterOfBox(const FBox& InBox, FVector& ReCenter) {
}

void AG01BattleFormation::AddOptionPointComponent(FName InPointLabel, TSubclassOf<AActor> InActorClass, bool& ReSuccess, UChildActorComponent*& ReActorComponent) {
}


