#pragma once
#include "CoreMinimal.h"
#include "QuestConditionParamBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionParamBase -FallbackName=QuestConditionParamBase
#include "G01BlackSmithMenuIDStruct.h"
#include "G01EquipCompleteConditionParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01EquipCompleteConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BlackSmithMenuIDStruct EquipID;
    
    FG01EquipCompleteConditionParam();
};

