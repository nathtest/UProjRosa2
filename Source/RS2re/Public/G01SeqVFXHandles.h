#pragma once
#include "CoreMinimal.h"
#include "G01SeqVFXHandles.generated.h"

class UG01VFXHandle;

USTRUCT(BlueprintType)
struct FG01SeqVFXHandles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01VFXHandle*> MVFXHandles;
    
    RS2RE_API FG01SeqVFXHandles();
};

