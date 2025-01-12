#pragma once
#include "CoreMinimal.h"
#include "G01SeqAvailableCameraCutData.h"
#include "G01CameraPatternData.generated.h"

USTRUCT(BlueprintType)
struct FG01CameraPatternData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01SeqAvailableCameraCutData> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> SpPatternIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> LinkPatternIndexList;
    
    RS2RE_API FG01CameraPatternData();
};

