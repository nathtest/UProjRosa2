#pragma once
#include "CoreMinimal.h"
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "QuestReceiveReserveParamInSectionRange.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestReceiveReserveParamInSectionRange -FallbackName=QuestReceiveReserveParamInSectionRange
#include "G01EnvSoundIDStruct.h"
#include "G01BattleFieldEnvSoundInfo.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleFieldEnvSoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01EnvSoundIDStruct EnvSoundID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestReceiveReserveParamInSectionRange Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReversalUseConditionSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct ConditionFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReversalUseConditionFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAndCondition;
    
    FG01BattleFieldEnvSoundInfo();
};

