#pragma once
#include "CoreMinimal.h"
#include "G01FieldObjectData.generated.h"

USTRUCT(BlueprintType)
struct FG01FieldObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName objectName;
    
    RS2RE_API FG01FieldObjectData();
};

