#pragma once
#include "CoreMinimal.h"
#include "ESaveDataSyncType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ESaveDataSyncType -FallbackName=ESaveDataSyncType
#include "G01SaveDataSaveOptions.h"
#include "G01SaveDataExecuteReserve_AutoSave.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SaveDataExecuteReserve_AutoSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataSyncType SyncType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SaveDataSaveOptions SaveOptions;
    
    FG01SaveDataExecuteReserve_AutoSave();
};

