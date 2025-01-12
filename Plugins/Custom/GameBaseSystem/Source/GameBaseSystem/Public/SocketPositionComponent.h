#pragma once
#include "CoreMinimal.h"
#include "ChildAttachPositionComponentBase.h"
#include "SocketPositionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API USocketPositionComponent : public UChildAttachPositionComponentBase {
    GENERATED_BODY()
public:
    USocketPositionComponent(const FObjectInitializer& ObjectInitializer);

};

