#include "VisualActorSubAnimInstBase.h"

UVisualActorSubAnimInstBase::UVisualActorSubAnimInstBase() {
    this->MPhysicsMasterAlpha = 1.00f;
    this->MPhysicsAlpha = 1.00f;
}

bool UVisualActorSubAnimInstBase::IsPreviewWorld() const {
    return false;
}

FVisualActorSubAnimInstParams UVisualActorSubAnimInstBase::GetSubAnimInstParams() const {
    return FVisualActorSubAnimInstParams{};
}


