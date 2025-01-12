#include "VisualActorSubAnimInstParams.h"

FVisualActorSubAnimInstParams::FVisualActorSubAnimInstParams() {
    this->MPhysicsAlpha = 0.00f;
    this->MMaxMoveSpeed = 0.00f;
    this->MMoveSpeed = 0.00f;
    this->MVelocityRatio = 0.00f;
    this->VelocityZ = 0.00f;
    this->MMoveTypeFrontBack = EVisualActorMoveType::Stop;
    this->MMoveTypeLeftRight = EVisualActorMoveType::Stop;
}

