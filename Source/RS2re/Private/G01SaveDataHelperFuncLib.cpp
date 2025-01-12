#include "G01SaveDataHelperFuncLib.h"

UG01SaveDataHelperFuncLib::UG01SaveDataHelperFuncLib() {
}

FString UG01SaveDataHelperFuncLib::Func_VersionToString(const FG01SaveDataVersion& InVersion) {
    return TEXT("");
}

FTimespan UG01SaveDataHelperFuncLib::Func_SaveTimeToSpan(const FG01SaveTime& InTime) {
    return FTimespan{};
}


