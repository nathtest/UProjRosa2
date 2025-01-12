#include "VALookParams.h"

FVALookParams::FVALookParams() {
    this->GazeType = EVAGazeType::Type1;
    this->FirstCalculation = false;
    this->LookMode = EVALookMode::Auto;
    this->LookType = EVALookType::None;
    this->EyeControlMode = EVAEyeControlMode::Auto;
    this->NextLookType = EVALookType::None;
    this->LookTypeBlendTime = 0.00f;
    this->LookTypeBlendCurve = NULL;
    this->LookTargetComponent = NULL;
    this->LookRotationCurve = NULL;
    this->HeadRollAngle = 0.00f;
}

