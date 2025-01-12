#pragma once
#include "CoreMinimal.h"
#include "G01ConvertExcelDataValueStruct.h"
#include "G01ConvertExcelDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01ConvertExcelDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ConvertExcelDataValueStruct> ValueList;
    
    RS2RE_API FG01ConvertExcelDataStruct();
};

