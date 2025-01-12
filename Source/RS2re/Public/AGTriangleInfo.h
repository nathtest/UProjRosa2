#pragma once
#include "CoreMinimal.h"
#include "AGTriangleInfo.generated.h"

USTRUCT(BlueprintType)
struct FAGTriangleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 VertexIndex0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 VertexIndex1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 VertexIndex2;
    
    RS2RE_API FAGTriangleInfo();
};

