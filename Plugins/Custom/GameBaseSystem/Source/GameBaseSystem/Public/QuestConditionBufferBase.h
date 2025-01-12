#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestConditionBufferBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TransientBufferCounter;
    
public:
    FQuestConditionBufferBase();
};

