#pragma once
#include "CoreMinimal.h"
#include "ESaveDataLoadError.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ESaveDataLoadError -FallbackName=ESaveDataLoadError
#include "SaveDataRequestInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataRequestInfo -FallbackName=SaveDataRequestInfo
#include "G01SaveLoadDataStruct.h"
#include "G01SaveLoadDataCache.generated.h"

class UG01SaveGameData;

USTRUCT(BlueprintType)
struct RS2RE_API FG01SaveLoadDataCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01SaveLoadDataStruct Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSaveDataRequestInfo Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESaveDataLoadError LoadError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UG01SaveGameData* SaveData;
    
    FG01SaveLoadDataCache();
};

