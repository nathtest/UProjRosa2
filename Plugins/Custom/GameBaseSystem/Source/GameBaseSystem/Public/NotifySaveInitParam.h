#pragma once
#include "CoreMinimal.h"
#include "NotifySaveInitParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FNotifySaveInitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PropertyTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PropertyResetFlags;
    
    FNotifySaveInitParam();
};

