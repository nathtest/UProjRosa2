#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01CharaVariableStatus.h"
#include "G01CharacterID.h"
#include "G01PartyManagerObserverInf.h"
#include "G01PartyTemporarySaveObserverInf.h"
#include "G01PartyVariableStatusComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01PartyVariableStatusComponent : public UActorComponent, public IG01PartyManagerObserverInf, public IG01PartyTemporarySaveObserverInf {
    GENERATED_BODY()
public:
    UG01PartyVariableStatusComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStatus(const FG01CharacterID& InCharacterId, const FG01CharaVariableStatus& InStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetLP(const FG01CharacterID& InCharacterId, int32 InLp);
    
    UFUNCTION(BlueprintCallable)
    void SetHP(const FG01CharacterID& InCharacterId, int32 InHp);
    
    UFUNCTION(BlueprintCallable)
    void SetBP(const FG01CharacterID& InCharacterId, int32 InBp);
    
    UFUNCTION(BlueprintCallable)
    void RecoverLP(const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void RecoverHP(const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void RecoverBP(const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    bool GetTemporaryLeaveCharaStatus(const FG01CharacterID& InCharacterId, FG01CharaVariableStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool GetStatus(const FG01CharacterID& InCharacterId, FG01CharaVariableStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLP(const FG01CharacterID& InCharacterId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHP(const FG01CharacterID& InCharacterId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBP(const FG01CharacterID& InCharacterId) const;
    

    // Fix for true pure virtual functions not being implemented
};

