#include "G01FieldPlayerManagerAccessor.h"

UG01FieldPlayerManagerAccessor::UG01FieldPlayerManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UG01FieldPlayerManagerAccessor::ToggleEnableStealth() {
}

void UG01FieldPlayerManagerAccessor::StopTurnOnTarget() {
}

void UG01FieldPlayerManagerAccessor::StartTurnOnTarget(AActor* InTarget) {
}

void UG01FieldPlayerManagerAccessor::StartReadyMove(const FTransform& InTransform, const float InTime) {
}

void UG01FieldPlayerManagerAccessor::StartPointCameraAtLocation(const float InAlpha) {
}

void UG01FieldPlayerManagerAccessor::StartForceMove(const float InToleranceDistance, EAISpeed InMoveType, bool InPausedCamera) {
}

void UG01FieldPlayerManagerAccessor::SetPointCameraAtLocation(const FVector& InLocation) {
}

void UG01FieldPlayerManagerAccessor::SetPlayerTransform(const FTransform& InTransform) {
}

void UG01FieldPlayerManagerAccessor::SetForceMoveLocation(const FVector& InLocation) {
}

void UG01FieldPlayerManagerAccessor::ResetLoseBattleAnimation() {
}

void UG01FieldPlayerManagerAccessor::RequestLoseBattleAnimation() {
}

void UG01FieldPlayerManagerAccessor::PlayVoice(const FG01FieldPlayerVoiceTypeStruct& InVoiceType) {
}

bool UG01FieldPlayerManagerAccessor::IsForceMove() const {
    return false;
}

void UG01FieldPlayerManagerAccessor::GimmickInteractAction(AGimmickObjectBase* InGimmickObject, EG01GimmickType InGimmickType) {
}

AActor* UG01FieldPlayerManagerAccessor::GetTurnTarget() {
    return NULL;
}

void UG01FieldPlayerManagerAccessor::GetPlayerTransform(FTransform& OutTransform) const {
}

void UG01FieldPlayerManagerAccessor::GetLeaveCollisionLocation(FVector& OutLocation) {
}

void UG01FieldPlayerManagerAccessor::ExecuteGimmickReaction() {
}

void UG01FieldPlayerManagerAccessor::EnableStealth() {
}

void UG01FieldPlayerManagerAccessor::DisableStealth() {
}

void UG01FieldPlayerManagerAccessor::CheckEnableStealth(bool& OutIsEnableStealth) const {
}

void UG01FieldPlayerManagerAccessor::CheckActiveTalkCamera(bool& OutIsActive, AActor*& OutTalkTargetActor) {
}

void UG01FieldPlayerManagerAccessor::ChangeTalkCamera(const AActor* InTalkTargetActor) {
}

void UG01FieldPlayerManagerAccessor::CancelTalkCamera() {
}


