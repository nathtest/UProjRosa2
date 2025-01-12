#include "G01VisualActorFuncLib.h"

UG01VisualActorFuncLib::UG01VisualActorFuncLib() {
}

bool UG01VisualActorFuncLib::Func_IsVehicleID(const FVisualActorID& InID) {
    return false;
}

bool UG01VisualActorFuncLib::Func_IsNormalCharaID(const FVisualActorID& InID) {
    return false;
}

bool UG01VisualActorFuncLib::Func_IsEquipmentID(const FVisualActorID& InID) {
    return false;
}

bool UG01VisualActorFuncLib::Func_IsEnemyID(const FVisualActorID& InID) {
    return false;
}

FTransform UG01VisualActorFuncLib::Func_GetEffectorTransform(const FG01VAIkTargetParam& InParam) {
    return FTransform{};
}

FAssetData UG01VisualActorFuncLib::Func_FindActualAnimAsset(UG01VisualActorCommonSettings* InCommonSettings, const FString& InSrcAnimPath, const FG01VAAnimReplaceFormatParams& InParams) {
    return FAssetData{};
}

void UG01VisualActorFuncLib::Func_CopytoBattleIkSettings() {
}


