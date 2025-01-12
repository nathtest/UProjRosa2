#pragma once
#include "CoreMinimal.h"
#include "G01MenuConfigStruct.h"
#include "G01MenuConfigListStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01MenuConfigListStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01MenuConfigStruct> ConfigList;
    
    FG01MenuConfigListStruct();
};

