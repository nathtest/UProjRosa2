#pragma once
#include "CoreMinimal.h"
#include "EG01PartyJoinType.h"
#include "G01CharaClassID.h"
#include "G01QStackJoinPartyParams.generated.h"

USTRUCT(BlueprintType)
struct FG01QStackJoinPartyParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EG01PartyJoinType::Type> JoinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharaClassID ClassID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeath;
    
    RS2RE_API FG01QStackJoinPartyParams();
};

