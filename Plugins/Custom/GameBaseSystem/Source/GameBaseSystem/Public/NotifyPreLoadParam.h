#pragma once
#include "CoreMinimal.h"
#include "ESaveDataSyncType.h"
#include "SaveDataLoadOptions.h"
#include "SaveDataTypeInfo.h"
#include "NotifyPreLoadParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FNotifyPreLoadParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDataTypeInfo TypeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataSyncType SyncType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDataLoadOptions LoadOptions;
    
    FNotifyPreLoadParam();
};

