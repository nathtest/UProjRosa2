#include "G01VisualActorCommonSettings.h"
#include "Templates/SubclassOf.h"

UG01VisualActorCommonSettings::UG01VisualActorCommonSettings() {
}

TSoftClassPtr<AG01CharacterVisualActor> UG01VisualActorCommonSettings::GetStandardSoftClass_Human() const {
    return NULL;
}

TSubclassOf<AG01CharacterVisualActor> UG01VisualActorCommonSettings::GetStandardClass_Human() const {
    return NULL;
}

FVAPartsKey UG01VisualActorCommonSettings::GetPartsKey_Head() const {
    return FVAPartsKey{};
}

FG01VAAnimReplaceSettings UG01VisualActorCommonSettings::GetAnimReplaceSettings() const {
    return FG01VAAnimReplaceSettings{};
}


