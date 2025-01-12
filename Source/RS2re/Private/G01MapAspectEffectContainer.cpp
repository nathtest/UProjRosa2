#include "G01MapAspectEffectContainer.h"

AG01MapAspectEffectContainer::AG01MapAspectEffectContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MMapAspectEffectTable = NULL;
}



void AG01MapAspectEffectContainer::Prepare(EG01MapAspectType InMapAspectType) {
}

UNiagaraSystem* AG01MapAspectEffectContainer::GetEffectAsset(EG01MapAspectType InMapAspectType) {
    return NULL;
}

TSoftObjectPtr<UNiagaraSystem> AG01MapAspectEffectContainer::FindEffectAsset(EG01MapAspectType InMapAspectType) {
    return NULL;
}

void AG01MapAspectEffectContainer::ClearLoadedAssets() {
}


