#pragma once
#include "CoreMinimal.h"
#include "SaveGameDataArray.generated.h"

class USaveGameDataCore;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSaveGameDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USaveGameDataCore*> Array;
    
    FSaveGameDataArray();
};

