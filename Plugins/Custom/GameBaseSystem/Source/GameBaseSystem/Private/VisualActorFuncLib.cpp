#include "VisualActorFuncLib.h"

UVisualActorFuncLib::UVisualActorFuncLib() {
}

bool UVisualActorFuncLib::Func_VisualActorID_NotEqual(FVisualActorID InA, FVisualActorID InB) {
    return false;
}

bool UVisualActorFuncLib::Func_VisualActorID_EqualEqual(FVisualActorID InA, FVisualActorID InB) {
    return false;
}

bool UVisualActorFuncLib::Func_IsValidVisualActorID(const FVisualActorID& InVisualActorID) {
    return false;
}

UAnimInstance* UVisualActorFuncLib::Func_GetVisualActorAnimInstance(AActor* InVisualActor) {
    return NULL;
}

AActor* UVisualActorFuncLib::Func_GetVisualActor(UObject* InObject) {
    return NULL;
}

FName UVisualActorFuncLib::Func_GetPartialPhysicsCurveName(EVisualActorPartialPhysicsType InType) {
    return NAME_None;
}

FVAAnimInstPathData UVisualActorFuncLib::Func_ConvertVisualActorAnimationPath(FName InVisualId, FName InFigureID, FName InAssetName) {
    return FVAAnimInstPathData{};
}


