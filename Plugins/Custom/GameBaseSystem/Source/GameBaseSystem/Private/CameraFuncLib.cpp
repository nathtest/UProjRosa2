#include "CameraFuncLib.h"

UCameraFuncLib::UCameraFuncLib() {
}

bool UCameraFuncLib::Func_CopySpringArmParams(USpringArmComponent* InSource, USpringArmComponent* InDest, bool InIsCopyTransform) {
    return false;
}

bool UCameraFuncLib::Func_CopyCineCameraParams(UCameraComponent* InSource, UCineCameraComponent* InDest, bool InIsCopyTransform) {
    return false;
}

bool UCameraFuncLib::Func_CopyCameraParams(UCameraComponent* InSource, UCameraComponent* InDest, bool InIsCopyTransform) {
    return false;
}


