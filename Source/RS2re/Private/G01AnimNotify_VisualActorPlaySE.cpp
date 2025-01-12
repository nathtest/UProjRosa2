#include "G01AnimNotify_VisualActorPlaySE.h"

UG01AnimNotify_VisualActorPlaySE::UG01AnimNotify_VisualActorPlaySE() {
    this->PlayType = EG01VisualActorPlaySeType::Play2D;
    this->AttenuationAsset = NULL;
    this->TraceLength = 200.00f;
    this->TriggerWeightThreshold = 0.50f;
    this->AnimTimeThreshold = 0.50f;
    this->bIsInGameWorld = false;
}

void UG01AnimNotify_VisualActorPlaySE::GetTraceSettings_Implementation(TEnumAsByte<ETraceTypeQuery>& OutTraceChannel, bool& OutTraceComplex, TEnumAsByte<EDrawDebugTrace::Type>& OutDrawDebugType, FLinearColor& OutTraceColor, FLinearColor& OutTraceHitColor, float& OutDrawTime) const {
}

USQEXSEADSoundBank* UG01AnimNotify_VisualActorPlaySE::FindPlayBank_Implementation(AActor* InVisualActor) const {
    return NULL;
}


