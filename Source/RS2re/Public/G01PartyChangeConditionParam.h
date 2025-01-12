#pragma once
#include "CoreMinimal.h"
#include "QuestConditionParamBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionParamBase -FallbackName=QuestConditionParamBase
#include "EG01PartyJoinType.h"
#include "G01CharaClassID.h"
#include "G01PartyChangeConditionParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01PartyChangeConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EG01PartyJoinType::Type> JoinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01CharaClassID ClassID;
    
    FG01PartyChangeConditionParam();
};

