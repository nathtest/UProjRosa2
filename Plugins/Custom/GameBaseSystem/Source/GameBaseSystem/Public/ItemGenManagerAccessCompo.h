#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h"
#include "ItemGenManagerAccessCompo.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UItemGenManagerAccessCompo : public UManagerAccessor {
    GENERATED_BODY()
public:
    UItemGenManagerAccessCompo(const FObjectInitializer& ObjectInitializer);

};

