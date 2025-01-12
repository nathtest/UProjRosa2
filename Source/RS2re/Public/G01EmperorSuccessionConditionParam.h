#pragma once
#include "CoreMinimal.h"
#include "QuestConditionParamBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionParamBase -FallbackName=QuestConditionParamBase
#include "EG01EmperorSuccessionType.h"
#include "G01CharaClassID.h"
#include "G01EmperorSuccessionConditionParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01EmperorSuccessionConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01EmperorSuccessionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharaClassID ClassID;
    
    FG01EmperorSuccessionConditionParam();
};

