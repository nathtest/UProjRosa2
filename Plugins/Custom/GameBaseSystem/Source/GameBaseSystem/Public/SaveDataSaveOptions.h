#pragma once
#include "CoreMinimal.h"
#include "SaveDataSaveOptions.generated.h"

class USaveGameDataCore;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSaveDataSaveOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveWhenNotExist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDataUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGameDataCore* SaveData;
    
    FSaveDataSaveOptions();
};

