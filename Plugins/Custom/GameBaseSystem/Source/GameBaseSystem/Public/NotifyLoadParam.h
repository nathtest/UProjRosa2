#pragma once
#include "CoreMinimal.h"
#include "ESaveDataLoadError.h"
#include "NotifyPreLoadParam.h"
#include "NotifyLoadParam.generated.h"

class USaveGameDataCore;

USTRUCT(BlueprintType)
struct FNotifyLoadParam : public FNotifyPreLoadParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGameDataCore* SaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataLoadError Error;
    
    GAMEBASESYSTEM_API FNotifyLoadParam();
};

