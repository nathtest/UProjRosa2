#pragma once
#include "CoreMinimal.h"
#include "SoundSlot.h"
#include "SoundSlotList.generated.h"

USTRUCT(BlueprintType)
struct FSoundSlotList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundSlot> MSoundSlots;
    
    GAMEBASESYSTEM_API FSoundSlotList();
};

