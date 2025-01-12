#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01BattleArtsLearnType.h"
#include "EG01EmperorSuccessionType.h"
#include "EG01FriendClass.h"
#include "G01CharacterID.h"
#include "G01FormationIDStruct.h"
#include "G01PartyManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01PartyManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01PartyManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyManager_SetEmperor(const FG01CharacterID& InEmperorCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyManager_Reorder();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyManager_ReleaseFriendClass(EG01FriendClass InFriendClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyManager_PostEmperorSuccessionSequence(EG01EmperorSuccessionType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyManager_Leave(const FG01CharacterID& InCharacterId, bool InDeath);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyManager_Join(const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyManager_FormationID(const FG01FormationIDStruct& InFormationId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyManager_CharaLearnArts(const FG01CharacterID& InCharacterId, const FName& InArtsID, const EG01BattleArtsLearnType InArtsType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyManager_CharaForceLearnArts(const FG01CharacterID& InCharacterId, const FName& InArtsID);
    
};

