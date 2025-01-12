#pragma once
#include "CoreMinimal.h"
#include "SaveDataTypeInfo.h"
#include "NotifyPostCreateParam.generated.h"

class USaveGameDataCore;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FNotifyPostCreateParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDataTypeInfo TypeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGameDataCore* SaveData;
    
    FNotifyPostCreateParam();
};

