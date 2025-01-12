#pragma once
#include "CoreMinimal.h"
#include "PartyMemberInfo.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FPartyMemberInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* MPartyCharacter;
    
    GAMEBASESYSTEM_API FPartyMemberInfo();
};

