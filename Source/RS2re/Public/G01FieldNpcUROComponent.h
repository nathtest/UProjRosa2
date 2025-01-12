#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EVisibilityBasedAnimTickOption -FallbackName=EVisibilityBasedAnimTickOption
#include "G01UROComponent.h"
#include "G01FieldNpcUROComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01FieldNpcUROComponent : public UG01UROComponent {
    GENERATED_BODY()
public:
    UG01FieldNpcUROComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNpcAnimTickOption(EVisibilityBasedAnimTickOption InOption);
    
};

