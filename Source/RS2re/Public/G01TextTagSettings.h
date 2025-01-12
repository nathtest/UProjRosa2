#pragma once
#include "CoreMinimal.h"
#include "G01TextTagSettings.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct RS2RE_API FG01TextTagSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BeginKeyword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EndKeyword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Prefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OperationTable;
    
    FG01TextTagSettings();
};

