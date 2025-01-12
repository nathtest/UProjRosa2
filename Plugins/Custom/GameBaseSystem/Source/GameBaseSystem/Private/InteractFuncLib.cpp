#include "InteractFuncLib.h"

UInteractFuncLib::UInteractFuncLib() {
}

bool UInteractFuncLib::Func_InitGenerateConditions(const UObject* InWorldContextObject, FGenerateConditions& InOutConditions) {
    return false;
}

bool UInteractFuncLib::Func_HasAnyConditions(const FGenerateConditions& InConditions) {
    return false;
}

EGenInitVisibility UInteractFuncLib::Func_GetReverseVisibility(EGenInitVisibility InVisibility) {
    return EGenInitVisibility::Visible;
}

EGenInitVisibility UInteractFuncLib::Func_CheckGenerateConditions(const UObject* InWorldContextObject, const FGenerateConditions& InConditions, FGeneratorConditionCache& OutCache) {
    return EGenInitVisibility::Visible;
}

bool UInteractFuncLib::Func_CheckConditionSection(const UObject* InWorldContextObject, const FGenerateConditions& InConditions) {
    return false;
}

bool UInteractFuncLib::Func_CheckConditionFlag(const UObject* InWorldContextObject, const FGenerateConditions& InConditions) {
    return false;
}


