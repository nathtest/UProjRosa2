#pragma once
#include "CoreMinimal.h"
#include "AGEdgeInfo.generated.h"

USTRUCT(BlueprintType)
struct FAGEdgeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 VertexIndex0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 VertexIndex1;
    
    RS2RE_API FAGEdgeInfo();
};

