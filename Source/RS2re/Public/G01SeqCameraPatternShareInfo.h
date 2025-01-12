#pragma once
#include "CoreMinimal.h"
#include "G01SeqCameraPatternInfo.h"
#include "G01SeqCameraPatternShareInfo.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SeqCameraPatternShareInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MPatternIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MPrevSelectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MPatternUpdateCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01SeqCameraPatternInfo MLastPatternInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ForceCameraPatternIndex;
    
    FG01SeqCameraPatternShareInfo();
};

