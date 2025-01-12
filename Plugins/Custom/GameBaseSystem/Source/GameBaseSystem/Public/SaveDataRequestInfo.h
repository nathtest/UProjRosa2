#pragma once
#include "CoreMinimal.h"
#include "ESaveSlotCategory.h"
#include "SaveDataRequestInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSaveDataRequestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveSlotCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FSaveDataRequestInfo();
};

