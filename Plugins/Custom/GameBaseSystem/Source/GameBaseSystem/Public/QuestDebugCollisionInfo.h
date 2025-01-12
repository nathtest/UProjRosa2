#pragma once
#include "CoreMinimal.h"
#include "CollisionEventInfoBase.h"
#include "QuestSectionNameView.h"
#include "QuestDebugCollisionInfo.generated.h"

class AQuestObjectBase;

USTRUCT(BlueprintType)
struct FQuestDebugCollisionInfo : public FCollisionEventInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsLevelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectBase> MTargetQuestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSectionNameView MTargetSection;
    
    GAMEBASESYSTEM_API FQuestDebugCollisionInfo();
};

