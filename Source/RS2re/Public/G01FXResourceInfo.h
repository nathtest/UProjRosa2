#pragma once
#include "CoreMinimal.h"
#include "G01FXResourceInfo.generated.h"

class UG01FXHandle;
class UObject;

USTRUCT(BlueprintType)
struct FG01FXResourceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* MResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01FXHandle*> MHandles;
    
    RS2RE_API FG01FXResourceInfo();
};

