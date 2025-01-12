#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01PartyManagerObserverInf.h"
#include "G01PartyTemporarySaveObserverInf.h"
#include "G01PartyLearnArtsComponent.generated.h"

class UG01PartyLearnArtsSlotDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01PartyLearnArtsComponent : public UActorComponent, public IG01PartyManagerObserverInf, public IG01PartyTemporarySaveObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01PartyLearnArtsSlotDataAsset* DataAsset;
    
public:
    UG01PartyLearnArtsComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

