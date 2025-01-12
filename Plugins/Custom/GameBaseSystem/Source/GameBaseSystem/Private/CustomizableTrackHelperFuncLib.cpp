#include "CustomizableTrackHelperFuncLib.h"

UCustomizableTrackHelperFuncLib::UCustomizableTrackHelperFuncLib() {
}

bool UCustomizableTrackHelperFuncLib::IsPlayingEd() {
    return false;
}

bool UCustomizableTrackHelperFuncLib::IsEditor(const UObject* InWorldContext) {
    return false;
}

int32 UCustomizableTrackHelperFuncLib::GetCurrentTimeEd() {
    return 0;
}

int32 UCustomizableTrackHelperFuncLib::GetCurrentLocalTimeEd() {
    return 0;
}


