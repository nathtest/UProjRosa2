#pragma once
#include "CoreMinimal.h"
#include "CollisionOverlapConditionParam.h"
#include "QuestConditionDataBase.h"
#include "CollisionOverlapConditionData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FCollisionOverlapConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionOverlapConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCollisionOverlapConditionParam Base;
    
    FCollisionOverlapConditionData();
};

