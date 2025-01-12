#pragma once
#include "CoreMinimal.h"
#include "CollisionOverlapConditionData.h"
#include "QuestConditionBufferBase.h"
#include "CollisionOverlapConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FCollisionOverlapConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollisionOverlapConditionData> Buffer;
    
    FCollisionOverlapConditionBuffer();
};

