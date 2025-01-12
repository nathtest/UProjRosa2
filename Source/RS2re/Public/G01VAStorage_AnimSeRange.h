#pragma once
#include "CoreMinimal.h"
#include "G01VAStorage_AnimSeRange.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FG01VAStorage_AnimSeRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudibleRange;
    
    RS2RE_API FG01VAStorage_AnimSeRange();
};

