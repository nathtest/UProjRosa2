#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01PartyManagerObserverInf.h"
#include "G01PartyPresetDataComponent.generated.h"

class UG01PartyPresetDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01PartyPresetDataComponent : public UActorComponent, public IG01PartyManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01PartyPresetDataAsset* PresetDataAsset;
    
public:
    UG01PartyPresetDataComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPresetKey(FName& OutKey) const;
    

    // Fix for true pure virtual functions not being implemented
};

