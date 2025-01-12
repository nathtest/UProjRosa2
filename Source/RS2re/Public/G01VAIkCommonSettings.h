#pragma once
#include "CoreMinimal.h"
#include "G01VAIkCommonSettings.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FG01VAIkCommonSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TargetSocketTable;
    
    RS2RE_API FG01VAIkCommonSettings();
};

