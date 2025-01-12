#pragma once
#include "CoreMinimal.h"
#include "G01VAAnimReplaceFormatKeys.generated.h"

USTRUCT(BlueprintType)
struct FG01VAAnimReplaceFormatKeys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WeaponId;
    
    RS2RE_API FG01VAAnimReplaceFormatKeys();
};

