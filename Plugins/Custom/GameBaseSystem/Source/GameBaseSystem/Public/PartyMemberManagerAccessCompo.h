#pragma once
#include "CoreMinimal.h"
#include "EPartyID.h"
#include "ManagerAccessor.h"
#include "PartyMemberManagerAccessCompo.generated.h"

class APartyMemberManagerBase;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UPartyMemberManagerAccessCompo : public UManagerAccessor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APartyMemberManagerBase* MPartyMemberManager;
    
public:
    UPartyMemberManagerAccessCompo(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPartyMember(EPartyID InMemberID, APawn* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyLeader(APawn* InPlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    APartyMemberManagerBase* GetPartyMemberManager();
    
public:
    UFUNCTION(BlueprintCallable)
    APawn* GetPartyMemberByID(EPartyID InMemberID);
    
};

