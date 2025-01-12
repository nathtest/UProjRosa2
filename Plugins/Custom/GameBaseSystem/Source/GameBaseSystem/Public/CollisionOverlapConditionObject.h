#pragma once
#include "CoreMinimal.h"
#include "QuestConditionObjectBase.h"
#include "CollisionOverlapConditionObject.generated.h"

class AActor;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UCollisionOverlapConditionObject : public UQuestConditionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
public:
    UCollisionOverlapConditionObject();

};

