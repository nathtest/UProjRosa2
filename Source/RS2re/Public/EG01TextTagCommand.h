#pragma once
#include "CoreMinimal.h"
#include "EG01TextTagCommand.generated.h"

UENUM(BlueprintType)
enum class EG01TextTagCommand : uint8 {
    None,
    ID_Normal_PlayerGender,
    ID_Normal_PlayerClass,
    ID_Normal_PartyGender,
    ID_Normal_PartyClass,
    Content_Normal_M_Num,
    Content_Normal_M_NumComma,
    Content_Normal_M_String,
    Content_Normal_M_SItemName,
    Content_Normal_M_PItemName,
    Content_Normal_M_SPItemName,
    Content_Normal_A_UserInputName,
    Content_Normal_A_PartyClass,
    Content_Normal_A_PartyName,
    Content_Normal_A_PlayerClass,
    Content_Normal_A_PlayerName,
    Content_Normal_A_PlayerGender,
    Content_Normal_A_ClassName,
    Content_Normal_A_ClassCurrentName,
    Content_Normal_A_MaleFemaleNormal,
    Content_Normal_A_SingularPlural,
    Content_Normal_A_Noun,
    Content_Normal_A_Listener,
    Content_Normal_A_HiragaGen,
    Content_Normal_A_TomaGen,
    Content_Normal_A_InstitutionCrown,
    Content_Normal_S_Break,
    Content_Normal_S_Emd,
    Content_Normal_S_HasPatchum,
    Content_Normal_S_Link,
    Content_Normal_S_Prepos,
    Content_Rich_Button,
    Content_Rich_Image,
    Content_Rich_Wait,
    Content_Rich_Color,
};

