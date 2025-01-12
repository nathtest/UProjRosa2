#pragma once
#include "CoreMinimal.h"
#include "ESaveDataGroup.h"
#include "ESaveSlotCategory.h"
#include "AutoSaveParams.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FAutoSaveParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataGroup Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveSlotCategory SlotCategory;
    
    FAutoSaveParams();
};

