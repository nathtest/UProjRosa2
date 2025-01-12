#pragma once
#include "CoreMinimal.h"
#include "SoundPrefixArray.generated.h"

USTRUCT(BlueprintType)
struct FSoundPrefixArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MSoundPrefixes;
    
    GAMEBASESYSTEM_API FSoundPrefixArray();
};

