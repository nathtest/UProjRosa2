#pragma once
#include "CoreMinimal.h"
#include "G01ConvertExcelDataValueStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01ConvertExcelDataValueStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Row;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    RS2RE_API FG01ConvertExcelDataValueStruct();
};

