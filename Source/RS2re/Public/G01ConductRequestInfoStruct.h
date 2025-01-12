#pragma once
#include "CoreMinimal.h"
#include "G01ConductCacheStruct.h"
#include "G01ConductRequestInfoStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ConductRequestInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugRequestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ConductCacheStruct ConductData;
    
    FG01ConductRequestInfoStruct();
};

