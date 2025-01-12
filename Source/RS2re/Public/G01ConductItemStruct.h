#pragma once
#include "CoreMinimal.h"
#include "G01ConductItemStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ConductItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnable;
    
    FG01ConductItemStruct();
};

