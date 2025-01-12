#pragma once
#include "CoreMinimal.h"
#include "ESoundCategoryID.h"
#include "SoundAccessParameter.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FSoundAccessParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundCategoryID MSoundCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MUsingSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> MRequestSoundSoftRef;
    
    GAMEBASESYSTEM_API FSoundAccessParameter();
};

