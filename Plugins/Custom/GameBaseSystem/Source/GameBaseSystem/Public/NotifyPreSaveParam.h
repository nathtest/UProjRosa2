#pragma once
#include "CoreMinimal.h"
#include "ESaveDataSyncType.h"
#include "SaveDataLoadOptions.h"
#include "SaveDataSaveOptions.h"
#include "SaveDataTypeInfo.h"
#include "NotifyPreSaveParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FNotifyPreSaveParam {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDataSaveOptions SaveOptions;
    
    FNotifyPreSaveParam();
};

