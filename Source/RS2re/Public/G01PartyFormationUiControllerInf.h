#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01CharacterID.h"
#include "G01PartyFormationReactionTypeIDStruct.h"
#include "G01PartyFormationUiControllerInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01PartyFormationUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01PartyFormationUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PartyFormation_Request(AActor* Actor, FG01PartyFormationReactionTypeIDStruct ReactionID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PartyFormation_FriendRequestFromBlackSmith(AActor* Actor, FG01CharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PartyFormation_FriendRequest(AActor* Actor, FG01CharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PartyFormation_Close();
    
};

