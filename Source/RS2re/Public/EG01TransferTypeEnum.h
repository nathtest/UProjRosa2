#pragma once
#include "CoreMinimal.h"
#include "EG01TransferTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01TransferTypeEnum : uint8 {
    TRANSFERDATA_PS5,
    ProductTransferData_PS4,
    TRANSFERDATA_PS4,
    TRANSFERDATA_GENERAL,
    NUM,
};

