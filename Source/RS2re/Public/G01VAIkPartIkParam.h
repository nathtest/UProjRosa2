#pragma once
#include "CoreMinimal.h"
#include "EG01VAIkType.h"
#include "G01VAIkPartIkParam.generated.h"

USTRUCT(BlueprintType)
struct FG01VAIkPartIkParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01VAIkType IkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IkRefCount;
    
    RS2RE_API FG01VAIkPartIkParam();
};

