#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "EPartyID.h"
#include "PartyMemberInfo.h"
#include "PlayerPartySubsystem.generated.h"

UCLASS(Blueprintable)
class UPlayerPartySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPartyID, FPartyMemberInfo> MPartyMemberList;
    
public:
    UPlayerPartySubsystem();

};

