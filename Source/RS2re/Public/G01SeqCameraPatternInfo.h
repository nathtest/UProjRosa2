#pragma once
#include "CoreMinimal.h"
#include "G01SeqCameraPatternInfo.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SeqCameraPatternInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MPatternCutName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsSpecialPattern;
    
    FG01SeqCameraPatternInfo();
};

