#pragma once
#include "CoreMinimal.h"
#include "ChildAttachPositionComponentBase.h"
#include "RelativePositionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API URelativePositionComponent : public UChildAttachPositionComponentBase {
    GENERATED_BODY()
public:
    URelativePositionComponent(const FObjectInitializer& ObjectInitializer);

};

