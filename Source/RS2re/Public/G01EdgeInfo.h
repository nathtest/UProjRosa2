#pragma once
#include "CoreMinimal.h"
#include "G01EdgeInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01EdgeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 VertexIndex0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 VertexIndex1;
    
    RS2RE_API FG01EdgeInfo();
};

