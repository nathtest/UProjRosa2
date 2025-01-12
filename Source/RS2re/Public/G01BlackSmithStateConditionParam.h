#pragma once
#include "CoreMinimal.h"
#include "QuestConditionParamBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionParamBase -FallbackName=QuestConditionParamBase
#include "EG01BlackSmithMenuStateEnum.h"
#include "G01BlackSmithMenuIDStruct.h"
#include "G01BlackSmithStateConditionParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BlackSmithStateConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BlackSmithMenuIDStruct EquipID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01BlackSmithMenuStateEnum State;
    
    FG01BlackSmithStateConditionParam();
};

