#pragma once
#include "CoreMinimal.h"
#include "SaveDataSaveOptions.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataSaveOptions -FallbackName=SaveDataSaveOptions
#include "G01SaveDataSaveOptions.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SaveDataSaveOptions : public FSaveDataSaveOptions {
    GENERATED_BODY()
public:
    FG01SaveDataSaveOptions();
};

