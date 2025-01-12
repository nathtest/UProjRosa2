#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01CharaStatus.h"
#include "G01PartyStatusCorrectionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01PartyStatusCorrectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UG01PartyStatusCorrectionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 CorrectionPhysicsDefence(int32 InValue, const FG01CharaStatus& InStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 CorrectionMagicDefence(int32 InValue, const FG01CharaStatus& InStatus);
    
};

