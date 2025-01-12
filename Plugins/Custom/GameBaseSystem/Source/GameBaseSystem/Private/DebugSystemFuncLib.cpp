#include "DebugSystemFuncLib.h"

UDebugSystemFuncLib::UDebugSystemFuncLib() {
}

void UDebugSystemFuncLib::Func_SetEnablePlayFromHere(const UObject* InWorldContextObject, const bool InEnable) {
}

bool UDebugSystemFuncLib::Func_IsShowGameplayDebugger(const UObject* InWorldContextObject) {
    return false;
}

void UDebugSystemFuncLib::Func_IsPlayFromHere(const UObject* InWorldContextObject, bool& OutIsPlayFromHere) {
}

void UDebugSystemFuncLib::Func_IsEnablePlayFromHere(const UObject* InWorldContextObject, bool& OutEnable) {
}

TArray<ULevelStreaming*> UDebugSystemFuncLib::Func_GetAllLevelStreamings(const UObject* InWorldContextObject) {
    return TArray<ULevelStreaming*>();
}

void UDebugSystemFuncLib::Func_AddGameLogData(const UObject* InWorldContextObject, EDebugSystemLogType InLogType, const FString& InLog, float InDuration, const FString& InHeader, bool InIsPrintToGame, bool InIsPrintToScreen, bool InIsPrintToLog, FLinearColor InColor) {
}


