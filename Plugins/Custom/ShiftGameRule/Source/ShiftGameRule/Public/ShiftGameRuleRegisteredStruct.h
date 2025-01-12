#pragma once
#include "CoreMinimal.h"
#include "ShiftGameRuleRegisteredStruct.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FShiftGameRuleRegisteredStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* registeredObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString objectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    SHIFTGAMERULE_API FShiftGameRuleRegisteredStruct();
};

