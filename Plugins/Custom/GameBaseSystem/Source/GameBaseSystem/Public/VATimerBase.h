#pragma once
#include "CoreMinimal.h"
#include "VATimerBase.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVATimerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsActive;
    
public:
    FVATimerBase();
};

