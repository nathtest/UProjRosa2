#include "VisualActorParamDataAsset.h"

UVisualActorParamDataAsset::UVisualActorParamDataAsset() {
}

FVAParamMoveControl UVisualActorParamDataAsset::GetMoveControlParam() const {
    return FVAParamMoveControl{};
}

FVAParamLookControl UVisualActorParamDataAsset::GetLookControlParam() const {
    return FVAParamLookControl{};
}


