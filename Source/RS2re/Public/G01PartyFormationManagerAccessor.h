#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01CharacterID.h"
#include "G01PartyFormationReactionTypeIDStruct.h"
#include "G01PartyFormationManagerAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01PartyFormationManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01PartyFormationManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestPartyFormation(AActor* Actor, FG01PartyFormationReactionTypeIDStruct ReactionID);
    
    UFUNCTION(BlueprintCallable)
    void RequestFriendPartyFormationFromBlackSmith(AActor* Actor, FG01CharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void RequestFriendPartyFormation(AActor* Actor, FG01CharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

