#include "G01VAAnimInstPoseType.h"

FG01VAAnimInstPoseType::FG01VAAnimInstPoseType() {
    this->PoseType = EG01VAPoseType::Default;
    this->DefaultBlendTime = 0.00f;
    this->BlendTime = 0.00f;
    this->PrevPoseType = EG01VAPoseType::Default;
}

