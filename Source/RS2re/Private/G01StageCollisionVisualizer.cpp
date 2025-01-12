#include "G01StageCollisionVisualizer.h"

AG01StageCollisionVisualizer::AG01StageCollisionVisualizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DrawDistance = 3000.00f;
    this->DrawDot = 0.00f;
    this->DrawUpdateTime = 0.10f;
}

void AG01StageCollisionVisualizer::UpdateStageCollisionData() {
}

void AG01StageCollisionVisualizer::DrawStageCollision() {
}


