#pragma once
#include "CoreMinimal.h"
#include "QuestConditionParamBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionParamBase -FallbackName=QuestConditionParamBase
#include "G01ClearAreaCountConditionParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ClearAreaCountConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTotalCount;
    
    FG01ClearAreaCountConditionParam();
};

