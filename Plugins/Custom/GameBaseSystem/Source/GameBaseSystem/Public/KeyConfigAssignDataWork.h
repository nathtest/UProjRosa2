#pragma once
#include "CoreMinimal.h"
#include "KeyConfigAssignData.h"
#include "KeyConfigAssignDataWork.generated.h"

class UKeyConfigPreset;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FKeyConfigAssignDataWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyConfigAssignData WorkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKeyConfigPreset* Preset;
    
    FKeyConfigAssignDataWork();
};

