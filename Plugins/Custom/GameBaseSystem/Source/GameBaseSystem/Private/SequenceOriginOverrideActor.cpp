#include "SequenceOriginOverrideActor.h"

ASequenceOriginOverrideActor::ASequenceOriginOverrideActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MOverrideActor = NULL;
    this->MCount = 0;
}

void ASequenceOriginOverrideActor::Cmd_RP_OverrideOrigin(FSeqOriginOverrideParam InParam) {
}


