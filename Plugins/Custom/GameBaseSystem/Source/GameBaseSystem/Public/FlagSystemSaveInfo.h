#pragma once
#include "CoreMinimal.h"
#include "FlagDataBuffers.h"
#include "FlagSystemSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FFlagSystemSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFlagDataBuffers> BufferMap;
    
    FFlagSystemSaveInfo();
};

