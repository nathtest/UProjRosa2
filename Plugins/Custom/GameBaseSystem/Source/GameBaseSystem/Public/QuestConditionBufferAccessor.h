#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferAccessor.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestConditionBufferAccessor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScriptStruct* ParamStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScriptStruct* DataStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScriptStruct* BuffersStruct;
    
public:
    FQuestConditionBufferAccessor();
};

