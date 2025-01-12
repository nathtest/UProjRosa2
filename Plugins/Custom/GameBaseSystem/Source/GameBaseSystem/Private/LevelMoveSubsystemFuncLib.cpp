#include "LevelMoveSubsystemFuncLib.h"

ULevelMoveSubsystemFuncLib::ULevelMoveSubsystemFuncLib() {
}

FLevelTransitionInfoView ULevelMoveSubsystemFuncLib::Func_ToLevelInfoView(const FName& InLevelRowName) {
    return FLevelTransitionInfoView{};
}

FString ULevelMoveSubsystemFuncLib::Func_GetLevelName(FLevelTransitionInfoView InLevelInfo) {
    return TEXT("");
}


