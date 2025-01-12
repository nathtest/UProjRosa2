#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "G01MapMaskParam.generated.h"

USTRUCT(BlueprintType)
struct FG01MapMaskParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> ParamList;
    
    RS2RE_API FG01MapMaskParam();
};

