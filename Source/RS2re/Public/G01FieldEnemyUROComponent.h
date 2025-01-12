#pragma once
#include "CoreMinimal.h"
#include "G01UROComponent.h"
#include "G01FieldEnemyUROComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01FieldEnemyUROComponent : public UG01UROComponent {
    GENERATED_BODY()
public:
    UG01FieldEnemyUROComponent(const FObjectInitializer& ObjectInitializer);

};

