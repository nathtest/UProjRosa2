#pragma once
#include "CoreMinimal.h"
#include "G01FieldObjectData.h"
#include "G01FieldSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01FieldSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01FieldObjectData> DestroyObjectList;
    
    RS2RE_API FG01FieldSaveInfo();
};

