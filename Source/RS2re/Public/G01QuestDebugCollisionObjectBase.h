#pragma once
#include "CoreMinimal.h"
#include "QuestDebugCollisionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestDebugCollisionObjectBase -FallbackName=QuestDebugCollisionObjectBase
#include "G01QuestDebugCollisionObjectBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01QuestDebugCollisionObjectBase : public AQuestDebugCollisionObjectBase {
    GENERATED_BODY()
public:
    AG01QuestDebugCollisionObjectBase(const FObjectInitializer& ObjectInitializer);

};

