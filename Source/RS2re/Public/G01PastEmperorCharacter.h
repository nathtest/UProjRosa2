#pragma once
#include "CoreMinimal.h"
#include "G01CharacterID.h"
#include "G01PastEmperorCharacter.generated.h"

USTRUCT(BlueprintType)
struct FG01PastEmperorCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContributePoint;
    
    RS2RE_API FG01PastEmperorCharacter();
};

