#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h"
#include "WindManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UWindManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UWindManagerAccessor(const FObjectInitializer& ObjectInitializer);

};

