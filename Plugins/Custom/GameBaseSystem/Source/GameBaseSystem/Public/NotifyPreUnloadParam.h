#pragma once
#include "CoreMinimal.h"
#include "SaveDataTypeInfo.h"
#include "NotifyPreUnloadParam.generated.h"

class USaveGameDataCore;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FNotifyPreUnloadParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDataTypeInfo TypeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGameDataCore* SaveData;
    
    FNotifyPreUnloadParam();
};

