#pragma once
#include "CoreMinimal.h"
#include "ObjectCharacterArray.generated.h"

class AObjectCharacter;

USTRUCT(BlueprintType)
struct FObjectCharacterArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjectCharacter*> MObjectCharacters;
    
    GAMEBASESYSTEM_API FObjectCharacterArray();
};

