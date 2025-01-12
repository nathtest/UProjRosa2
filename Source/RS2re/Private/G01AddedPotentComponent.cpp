#include "G01AddedPotentComponent.h"

UG01AddedPotentComponent::UG01AddedPotentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AddedPotentDataTable = NULL;
    this->AilmentDataTable = NULL;
    this->ExtarnalDataTable = NULL;
    this->EffectDataTable = NULL;
    this->ExtarnalHelper = NULL;
}

void UG01AddedPotentComponent::SetFxHiddenFlag(FName InFlagLabel, bool InIsHidden) {
}

void UG01AddedPotentComponent::RemoveEnhance(FG01AddedPotentBaseKeyStruct InPotent) {
}

void UG01AddedPotentComponent::RemoveCategory(FG01AddedPotentCategoryKeyStruct InCategory) {
}

void UG01AddedPotentComponent::RemoveBySource(AActor* InSource, FG01AddedPotentBaseKeyStruct InPotent) {
}

void UG01AddedPotentComponent::RemoveAllExtarnal() {
}

void UG01AddedPotentComponent::RemoveAllEnhance() {
}

void UG01AddedPotentComponent::RemoveAllAilment() {
}

void UG01AddedPotentComponent::Remove(FG01AddedPotentBaseKeyStruct InPotant) {
}

void UG01AddedPotentComponent::OnTurnElapsed() {
}

void UG01AddedPotentComponent::OnBeginResult() {
}

void UG01AddedPotentComponent::OnActionPrepare() {
}

void UG01AddedPotentComponent::OnActionEnded() {
}

void UG01AddedPotentComponent::NotifyActivateAbility(const FName& InAbilityId) {
}

void UG01AddedPotentComponent::InvalidAilment(AActor* InSource, FG01AddedPotentBaseKeyStruct InPotent) {
}

void UG01AddedPotentComponent::Hit(AActor* InSource, FG01AddedPotentBaseKeyStruct InPotant, FName InParameter, bool& OutIsApply) {
}

void UG01AddedPotentComponent::Has(FG01AddedPotentBaseKeyStruct InPotant, bool& OutHas) {
}

EG01AddedPotentUsageEnum UG01AddedPotentComponent::GetUsage(FG01AddedPotentBaseKeyStruct InPotant) {
    return EG01AddedPotentUsageEnum::AILMENT_GRANT;
}

int32 UG01AddedPotentComponent::GetOtherCorrectionPower(EG01AddedPotentEnhanceTypeEnum InType) {
    return 0;
}

void UG01AddedPotentComponent::GetHasPlusEnhance(TArray<FG01AddedPotentEnhanceStruct>& OutList) {
}

void UG01AddedPotentComponent::GetHasMinusEnhance(TArray<FG01AddedPotentEnhanceStruct>& OutList) {
}

void UG01AddedPotentComponent::GetHasAllExtarnal(TArray<AG01AddedPotentExtarnalObjectBase*>& OutList) {
}

void UG01AddedPotentComponent::GetHasAllEnhance(TArray<FG01AddedPotentEnhanceStruct>& OutList) {
}

void UG01AddedPotentComponent::GetHasAllAilment(TArray<FG01AddedPotentAilmentStruct>& OutList) {
}

void UG01AddedPotentComponent::GetCorrectionStatus(const FG01BattleCharacterStatusStruct& InCurrent, const FG01BattleCharacterStatusStruct& InMax, FG01BattleCharacterStatusStruct& OutStatus) {
}

FName UG01AddedPotentComponent::GetCategory(FG01AddedPotentBaseKeyStruct InPotant) {
    return NAME_None;
}

void UG01AddedPotentComponent::DetachExtarnal(AG01AddedPotentExtarnalObjectBase* InExtarnal) {
}

void UG01AddedPotentComponent::AttachExtarnal(AActor* InSource, AG01AddedPotentExtarnalObjectBase* InExtarnal, FName InParameter, bool& OutIsApply) {
}

void UG01AddedPotentComponent::AddEnhance(FG01AddedPotentBaseKeyStruct InPotent, EG01AddedPotentEnhanceTypeEnum InType, const int32& InValue, int32 InTurnCount, EG01AddedPotentCureTimingEnum InCureTiming, bool IsUnique, bool IsHidden, bool IsNeedNotify) {
}


