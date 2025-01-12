#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "G01SaveLog.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SaveLog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime LastSaveTime;
    
    FG01SaveLog();
};

