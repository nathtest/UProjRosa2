#pragma once
#include "CoreMinimal.h"
#include "KeyInputMappingDataMap.h"
#include "KeyConfigAssignData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FKeyConfigAssignData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<int32, FKeyInputMappingDataMap> MappingsByGroup;
    
    FKeyConfigAssignData();
};

