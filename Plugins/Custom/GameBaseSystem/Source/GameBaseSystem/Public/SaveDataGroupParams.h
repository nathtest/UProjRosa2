#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SaveDataGroupParams.generated.h"

class USaveGameDataCore;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSaveDataGroupParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USaveGameDataCore> SaveDataClass;
    
    FSaveDataGroupParams();
};

