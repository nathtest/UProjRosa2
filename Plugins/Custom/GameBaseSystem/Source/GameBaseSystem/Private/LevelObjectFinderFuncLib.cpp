#include "LevelObjectFinderFuncLib.h"

ULevelObjectFinderFuncLib::ULevelObjectFinderFuncLib() {
}

FString ULevelObjectFinderFuncLib::LevelObjectIdToString(const FLevelObjectIdCore& InLevelObjectID) {
    return TEXT("");
}

FName ULevelObjectFinderFuncLib::LevelObjectIdToName(const FLevelObjectIdCore& InLevelObjectID) {
    return NAME_None;
}

bool ULevelObjectFinderFuncLib::IsValidVisualActorClass(const FLevelObjectFindResult& InData) {
    return false;
}

bool ULevelObjectFinderFuncLib::IsValidGenerator(const FLevelObjectFindResult& InData) {
    return false;
}

bool ULevelObjectFinderFuncLib::IsValidGeneralString(const FLevelObjectFindResult& InData) {
    return false;
}

bool ULevelObjectFinderFuncLib::IsValidActor(const FLevelObjectFindResult& InData) {
    return false;
}

void ULevelObjectFinderFuncLib::Func_MakeLevelObjectID(const FName& InLevelObjectType, const FName& InLevelObjectID, int32 InGenericNumber, FLevelObjectID& OutLevelObjectID) {
}

bool ULevelObjectFinderFuncLib::Func_LevelObjectID_NotEqual(const FLevelObjectIdCore& InA, const FLevelObjectIdCore& InB) {
    return false;
}

bool ULevelObjectFinderFuncLib::Func_LevelObjectID_EqualEqual(const FLevelObjectIdCore& InA, const FLevelObjectIdCore& InB) {
    return false;
}


