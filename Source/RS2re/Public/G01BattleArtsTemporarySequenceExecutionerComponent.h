#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01BattleCharacterObserverInf.h"
#include "G01BattleArtsTemporarySequenceExecutionerComponent.generated.h"

class AG01SequenceControllerBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattleArtsTemporarySequenceExecutionerComponent : public UActorComponent, public IG01BattleCharacterObserverInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AG01SequenceControllerBase*> TemporarySequenceList;
    
public:
    UG01BattleArtsTemporarySequenceExecutionerComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

