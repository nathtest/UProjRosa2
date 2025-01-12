#pragma once
#include "CoreMinimal.h"
#include "ESaveDataSyncType.h"
#include "SaveDataRequestInfo.h"
#include "SaveDataSaveOptions.h"
#include "SaveReserveData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSaveReserveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSaveDataRequestInfo Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESaveDataSyncType SyncType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSaveDataSaveOptions SaveOptions;
    
    FSaveReserveData();
};

