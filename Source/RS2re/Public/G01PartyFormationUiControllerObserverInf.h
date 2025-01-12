#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01CharacterID.h"
#include "G01PartyFormationReactionTypeIDStruct.h"
#include "G01PartyFormationUiControllerObserverInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01PartyFormationUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01PartyFormationUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PartyFormationUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PartyFormationUiController_NpcRequest(AActor* Actor, FG01PartyFormationReactionTypeIDStruct ReactionID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PartyFormationUiController_FriendNpcRequest(AActor* Actor, FG01CharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PartyFormationUiController_FinishedOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PartyFormationUiController_CloseByFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PartyFormationUiController_Close();
    
};

