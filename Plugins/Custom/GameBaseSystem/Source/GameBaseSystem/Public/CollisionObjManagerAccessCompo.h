#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h"
#include "CollisionObjManagerAccessCompo.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UCollisionObjManagerAccessCompo : public UManagerAccessor {
    GENERATED_BODY()
public:
    UCollisionObjManagerAccessCompo(const FObjectInitializer& ObjectInitializer);

};

