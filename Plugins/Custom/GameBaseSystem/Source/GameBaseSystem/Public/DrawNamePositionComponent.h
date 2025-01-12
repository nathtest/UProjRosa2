#pragma once
#include "CoreMinimal.h"
#include "ChildAttachPositionComponentBase.h"
#include "DrawNamePositionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UDrawNamePositionComponent : public UChildAttachPositionComponentBase {
    GENERATED_BODY()
public:
    UDrawNamePositionComponent(const FObjectInitializer& ObjectInitializer);

};

