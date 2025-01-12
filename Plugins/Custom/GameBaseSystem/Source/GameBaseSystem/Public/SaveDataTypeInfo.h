#pragma once
#include "CoreMinimal.h"
#include "ESaveDataGroup.h"
#include "SaveDataRequestInfo.h"
#include "SaveDataTypeInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSaveDataTypeInfo : public FSaveDataRequestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataGroup Group;
    
    FSaveDataTypeInfo();
};

