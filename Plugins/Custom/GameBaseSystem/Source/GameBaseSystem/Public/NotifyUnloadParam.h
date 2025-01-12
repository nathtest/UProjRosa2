#pragma once
#include "CoreMinimal.h"
#include "NotifyPreUnloadParam.h"
#include "NotifyUnloadParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FNotifyUnloadParam : public FNotifyPreUnloadParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSuccess;
    
    FNotifyUnloadParam();
};

