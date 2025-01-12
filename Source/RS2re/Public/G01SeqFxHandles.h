#pragma once
#include "CoreMinimal.h"
#include "G01SeqFxHandles.generated.h"

class UG01FXHandle;

USTRUCT(BlueprintType)
struct FG01SeqFxHandles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01FXHandle*> MFxHandles;
    
    RS2RE_API FG01SeqFxHandles();
};

