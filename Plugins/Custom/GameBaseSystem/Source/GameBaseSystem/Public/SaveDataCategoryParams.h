#pragma once
#include "CoreMinimal.h"
#include "ESaveDataGroup.h"
#include "SaveDataCategoryParams.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSaveDataCategoryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataGroup Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FileNameFormat;
    
    FSaveDataCategoryParams();
};

