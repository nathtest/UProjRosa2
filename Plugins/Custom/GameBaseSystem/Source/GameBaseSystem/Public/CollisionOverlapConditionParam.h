#pragma once
#include "CoreMinimal.h"
#include "ECollisionObjOverlapType.h"
#include "InteractColliderTag.h"
#include "LevelObjectID.h"
#include "QuestConditionParamBase.h"
#include "CollisionOverlapConditionParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FCollisionOverlapConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLevelObjectID TargetObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CollisionObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FInteractColliderTag TargetCollisionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECollisionObjOverlapType OverlapType;
    
    FCollisionOverlapConditionParam();
};

