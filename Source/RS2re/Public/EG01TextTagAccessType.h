#pragma once
#include "CoreMinimal.h"
#include "EG01TextTagAccessType.generated.h"

UENUM(BlueprintType)
namespace EG01TextTagAccessType {
    enum Type {
        Party,
        Npc,
        Enemy,
        Item,
        Inventory,
        Equipment,
        Crown,
        Conversation,
        Battle,
    };
}

