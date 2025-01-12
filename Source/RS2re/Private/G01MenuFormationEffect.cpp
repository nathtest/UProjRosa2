#include "G01MenuFormationEffect.h"

AG01MenuFormationEffect::AG01MenuFormationEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AG01MenuFormationEffect::SetEffectName(const FName& InEffectNameTextID) {
}

FName AG01MenuFormationEffect::GetEffectNameTextID() const {
    return NAME_None;
}

EG01MenuFormationEffectResultEnum AG01MenuFormationEffect::ConfirmFormationEffect_Implementation(const TArray<FG01BattlePartyFormationPoint>& InFormationPointList, int32 InSelfPointIndex) {
    return EG01MenuFormationEffectResultEnum::UP;
}


