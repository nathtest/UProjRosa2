#pragma once
#include "CoreMinimal.h"
#include "G01CharacterID.generated.h"

USTRUCT(BlueprintType)
struct FG01CharacterID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MCharacterID;
    
    RS2RE_API FG01CharacterID();
};
FORCEINLINE uint32 GetTypeHash(const FG01CharacterID) { return 0; }

