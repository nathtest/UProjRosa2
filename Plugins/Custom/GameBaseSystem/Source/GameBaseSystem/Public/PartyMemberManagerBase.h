#pragma once
#include "CoreMinimal.h"
#include "EPartyID.h"
#include "ManagerBase.h"
#include "PartyMemberInfo.h"
#include "PartyMemberManagerBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API APartyMemberManagerBase : public AManagerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPartyID, FPartyMemberInfo> MPartyMemberList;
    
public:
    APartyMemberManagerBase(const FObjectInitializer& ObjectInitializer);

};

