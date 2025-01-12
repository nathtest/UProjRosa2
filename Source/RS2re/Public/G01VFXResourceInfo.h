#pragma once
#include "CoreMinimal.h"
#include "G01VFXResourceInfo.generated.h"

class UG01VFXHandle;
class UObject;

USTRUCT(BlueprintType)
struct FG01VFXResourceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* MResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01VFXHandle*> MHandles;
    
    RS2RE_API FG01VFXResourceInfo();
};

