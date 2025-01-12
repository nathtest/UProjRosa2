#pragma once
#include "CoreMinimal.h"
#include "NotifyPreSaveParam.h"
#include "NotifyPostSaveParam.generated.h"

class USaveGameDataCore;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FNotifyPostSaveParam : public FNotifyPreSaveParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGameDataCore* SaveData;
    
    FNotifyPostSaveParam();
};

