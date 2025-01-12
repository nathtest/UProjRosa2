#include "G01ActivityFuncLib.h"

UG01ActivityFuncLib::UG01ActivityFuncLib() {
}

void UG01ActivityFuncLib::Func_StartActivity(const UObject* InWorldContext, FG01ActivityID InActivityID) {
}

void UG01ActivityFuncLib::Func_SetActivityAvailability(const UObject* InWorldContext, FG01ActivityID InActivityID, const bool InIsEnable) {
}

void UG01ActivityFuncLib::Func_ResetActivity(const UObject* InWorldContext) {
}

void UG01ActivityFuncLib::Func_RequestActivityTerminate(const UObject* InWorldContext) {
}

void UG01ActivityFuncLib::Func_LaunchActivity(const UObject* InWorldContext, FG01ActivityID InActivityID) {
}

bool UG01ActivityFuncLib::Func_IsExistActivatedActivity(const UObject* InWorldContext) {
    return false;
}

void UG01ActivityFuncLib::Func_CompleteActivity(const UObject* InWorldContext, FG01ActivityID InActivityID) {
}

void UG01ActivityFuncLib::Func_CancelActivity(const UObject* InWorldContext, FG01ActivityID InActivityID) {
}


