#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBuffersBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBuffersBase -FallbackName=QuestConditionBuffersBase
#include "G01AbilityAcquisitionConditionBuffer.h"
#include "G01BattleEndConditionBuffer.h"
#include "G01BattleEndTransientConditionBuffer.h"
#include "G01BlackSmithLevelConditionBuffer.h"
#include "G01CheckDLCConditionBuffer.h"
#include "G01ClearAreaCountConditionBuffer.h"
#include "G01EmperorSuccessionConditionBuffer.h"
#include "G01EnemyDefeatConditionBuffer.h"
#include "G01EquipCompleteConditionBuffer.h"
#include "G01GenerationCountConditionBuffer.h"
#include "G01ImperialLevelConditionBuffer.h"
#include "G01ItemCollectConditionBuffer.h"
#include "G01PartyChangeConditionBuffer.h"
#include "G01PartyStatusLevelConditionBuffer.h"
#include "G01PeriodJumpConditionBuffer.h"
#include "G01PlayGoCompleteConditionBuffer.h"
#include "G01SevenHeroesDefeatConditionBuffer.h"
#include "G01QuestConditionBuffers.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01QuestConditionBuffers : public FQuestConditionBuffersBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityAcquisitionConditionBuffer AbilityAcquisition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleEndConditionBuffer BattleEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ClearAreaCountConditionBuffer ClearAreaCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01EnemyDefeatConditionBuffer EnemyDefeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01GenerationCountConditionBuffer GenerationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ItemCollectConditionBuffer ItemCollect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01PeriodJumpConditionBuffer PeriodJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SevenHeroesDefeatConditionBuffer SevenHeroesDefeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01PartyStatusLevelConditionBuffer PartyStatusLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01ImperialLevelConditionBuffer ImperialLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01EquipCompleteConditionBuffer EquipComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01BlackSmithLevelConditionBuffer BlackSmithLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01EmperorSuccessionConditionBuffer EmperorSuccession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01PartyChangeConditionBuffer PartyChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01PlayGoCompleteConditionBuffer PlayGoComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01BattleEndTransientConditionBuffer BattleEndTransient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01CheckDLCConditionBuffer CheckDLC;
    
    FG01QuestConditionBuffers();
};

