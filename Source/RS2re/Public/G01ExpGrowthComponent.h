#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01CharaStatus.h"
#include "G01CharacterID.h"
#include "G01PartyManagerObserverInf.h"
#include "G01PartyTemporarySaveObserverInf.h"
#include "G01ExpGrowthComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ExpGrowthComponent : public UActorComponent, public IG01PartyManagerObserverInf, public IG01PartyTemporarySaveObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMasterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsThrowHpExpByGrowthOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsThrowBpExpByGrowthOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsThrowArtsExpByGrowthOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsThrowMlExpByGrowthOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTotalExp;
    
public:
    UG01ExpGrowthComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetHpGrowthpPoint(const FG01CharacterID& InCharaID, FG01CharaStatus Status);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetBpGrowthPoint(const FG01CharacterID& InCharaID, FG01CharaStatus Status);
    

    // Fix for true pure virtual functions not being implemented
};

