#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01ElapsedYearsInfoRowStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01ElapsedYearsInfoRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElapsedYears;
    
    RS2RE_API FG01ElapsedYearsInfoRowStruct();
};

