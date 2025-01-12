#pragma once
#include "CoreMinimal.h"
#include "G01BattleCharacteristic.generated.h"

UENUM(BlueprintType)
enum class G01BattleCharacteristic : uint8 {
    NONE,
    MALE,
    FEMALE,
    UNDEAD,
    BOSS,
    FLOATING,
    SALAMANDER,
    UNDINE,
    SYLPH,
    GNOME,
    FROG,
    MARIONETTE_HATE_BLOCK,
    MARIONETTE_CONTROL_BLOCK,
    FAMILY_DMN,
    FAMILY_SKL,
    FAMILY_BST,
    FAMILY_FSH,
    FAMILY_DHM,
    FAMILY_PLT,
    FAMILY_AQC,
    FAMILY_ELS,
    FAMILY_ZMB,
    FAMILY_HMN,
    FAMILY_RAP,
    FAMILY_SNK,
    FAMILY_IOC,
    FAMILY_IST,
    FAMILY_WNC,
    FAMILY_GST,
    FAMILY_GAN,
    FAMILY_DRG,
    FAMILY_7HR,
    NUM,
};

