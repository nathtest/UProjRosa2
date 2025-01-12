#pragma once
#include "CoreMinimal.h"
#include "LevelTransitionInfoView.h"
#include "LevelTransitionParamRoom.h"
#include "QuestConditionParamBase.h"
#include "LevelTransitionConditionParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FLevelTransitionConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLevelTransitionInfoView TargetLevelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLevelTransitionParamRoom TargetRoomIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMoment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCheckPrevLevel;
    
    FLevelTransitionConditionParam();
};

