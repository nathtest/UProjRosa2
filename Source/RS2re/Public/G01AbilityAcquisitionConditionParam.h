#pragma once
#include "CoreMinimal.h"
#include "QuestConditionParamBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionParamBase -FallbackName=QuestConditionParamBase
#include "G01QCondAbilityConditionParams.h"
#include "G01AbilityAcquisitionConditionParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityAcquisitionConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01QCondAbilityConditionParams Params;
    
    FG01AbilityAcquisitionConditionParam();
};

