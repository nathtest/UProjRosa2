#pragma once
#include "CoreMinimal.h"
#include "KeyInputMappingData.h"
#include "KeyInputMappingDataArray.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FKeyInputMappingDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyInputMappingData> Array;
    
    FKeyInputMappingDataArray();
};

