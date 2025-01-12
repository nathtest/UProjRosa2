#pragma once
#include "CoreMinimal.h"
#include "EG01StaffRollDispCategoryEnum.generated.h"

UENUM(BlueprintType)
enum class EG01StaffRollDispCategoryEnum : uint8 {
    None,
    PrimaryItem,
    SecondaryItem,
    Name_One,
    Name_Two,
    Name_Three,
    Switch,
    PrimaryImage,
    SwitchImage,
    DeleteImage,
    Image_One,
    Image_Two,
    Image_Three,
    Chara_PrimaryItem,
    Chara_SecondaryItem,
    End,
};

