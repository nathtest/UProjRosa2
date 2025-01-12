#pragma once
#include "CoreMinimal.h"
#include "G01FXPointInfoBase.h"
#include "G01FXPointInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FG01FXPointInfo : public FG01FXPointInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MActor;
    
    RS2RE_API FG01FXPointInfo();
};

