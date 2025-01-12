#pragma once
#include "CoreMinimal.h"
#include "EQuestSectionControlFlags.generated.h"

UENUM()
enum class EQuestSectionControlFlags : uint32 {
    None,
    All = 4294967295,
    NotClearSectionBranchData = 1,
    NotCreateNewObject,
    NotCreateCondition = 4,
    NotCreateStack = 8,
    CondForceCompleteMode = 16,
    CondForceNotCompleteMode = 32,
    AllowConditionGrouping = 1024,
    RestartingBrokenQuest = 2048,
    NotCallCmdQA = 32768,
    NotCallCmdST = 65536,
    NotCallCmdCA = 131072,
    DuringSectionChecking = 1048576,
    DuringRestoration = 2097152,
    DuringSectionSkipping = 4194304,
    DuringSectionRewind = 8388608,
    DuringQuestSectionPreCalc = 16777216,
};

