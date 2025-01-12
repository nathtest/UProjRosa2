#pragma once
#include "CoreMinimal.h"
#include "SoundInstanceMap.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FSoundInstanceMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USoundBase*> MSoundInstanceMap;
    
    GAMEBASESYSTEM_API FSoundInstanceMap();
};

