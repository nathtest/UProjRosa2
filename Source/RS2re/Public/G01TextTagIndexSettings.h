#pragma once
#include "CoreMinimal.h"
#include "EG01TextTagType.h"
#include "G01TextTagIndexSettings.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01TextTagIndexSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TagNumberDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, EG01TextTagType> TypeBySpecifier;
    
    FG01TextTagIndexSettings();
};

