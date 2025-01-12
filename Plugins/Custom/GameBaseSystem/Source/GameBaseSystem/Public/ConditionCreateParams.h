#pragma once
#include "CoreMinimal.h"
#include "EQuestBufferIndex.h"
#include "ConditionCreateParams.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FConditionCreateParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestBufferIndex BufferIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* ParamStruct;
    
    FConditionCreateParams();
};

