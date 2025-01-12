#pragma once
#include "CoreMinimal.h"
#include "EG01VAIkPartType.h"
#include "G01VACcdikTargetParam.h"
#include "G01VAIkPartIkParam.h"
#include "G01VARuntimeIkParam.generated.h"

USTRUCT(BlueprintType)
struct FG01VARuntimeIkParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EG01VAIkPartType, FG01VAIkPartIkParam> PartIkParamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EG01VAIkPartType, FG01VACcdikTargetParam> CcdikParts;
    
public:
    RS2RE_API FG01VARuntimeIkParam();
};

