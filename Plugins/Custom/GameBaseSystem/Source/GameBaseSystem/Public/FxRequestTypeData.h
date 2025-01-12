#pragma once
#include "CoreMinimal.h"
#include "FxRequestTypeData.generated.h"

USTRUCT(BlueprintType)
struct FFxRequestTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName MEffectType;
    
    GAMEBASESYSTEM_API FFxRequestTypeData();
};

