#pragma once
#include "CoreMinimal.h"
#include "EG01PartyJoinType.h"
#include "G01CharacterID.h"
#include "G01PartyMemberUpdateInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01PartyMemberUpdateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EG01PartyJoinType::Type> MJoinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterID MCharaID;
    
    RS2RE_API FG01PartyMemberUpdateInfo();
};

