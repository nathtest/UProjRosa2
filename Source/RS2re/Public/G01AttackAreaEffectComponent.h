#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01AttackAreaEffectComponent.generated.h"

class UBoxComponent;
class UCapsuleComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01AttackAreaEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UG01AttackAreaEffectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShape(bool IsCircle, bool IsCapsule, bool IsCrossAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPose(UCapsuleComponent* InCollision, UBoxComponent* InBoxArea);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Enable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Disable();
    
};

