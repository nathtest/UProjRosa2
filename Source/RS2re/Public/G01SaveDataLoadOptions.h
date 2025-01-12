#pragma once
#include "CoreMinimal.h"
#include "SaveDataLoadOptions.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataLoadOptions -FallbackName=SaveDataLoadOptions
#include "G01SaveDataLoadOptions.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SaveDataLoadOptions : public FSaveDataLoadOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLevelRestoration;
    
    FG01SaveDataLoadOptions();
};

