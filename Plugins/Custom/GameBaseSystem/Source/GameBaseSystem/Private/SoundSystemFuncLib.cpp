#include "SoundSystemFuncLib.h"

USoundSystemFuncLib::USoundSystemFuncLib() {
}

FName USoundSystemFuncLib::Func_InsertSoundCategory(ESoundCategoryID InInsertCategory, const FName& InSoundID) {
    return NAME_None;
}

ESoundCategoryID USoundSystemFuncLib::Func_GetSoundCategoryID(const FName& InSoundID) {
    return ESoundCategoryID::SE;
}


