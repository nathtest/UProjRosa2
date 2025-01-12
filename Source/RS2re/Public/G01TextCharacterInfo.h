#pragma once
#include "CoreMinimal.h"
#include "G01TextCharacterID.h"
#include "G01TextCharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01TextCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TextCharacterID TextCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NameText;
    
    FG01TextCharacterInfo();
};

