#pragma once
#include "CoreMinimal.h"
#include "KeyConfigOperationCategory.h"
#include "KeyInputMappingDataArray.h"
#include "KeyInputMappingDataMap.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FKeyInputMappingDataMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKeyConfigOperationCategory, FKeyInputMappingDataArray> Map;
    
    FKeyInputMappingDataMap();
};

