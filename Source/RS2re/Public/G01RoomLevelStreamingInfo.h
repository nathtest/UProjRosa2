#pragma once
#include "CoreMinimal.h"
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "QuestReceiveReserveParamInSectionRange.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestReceiveReserveParamInSectionRange -FallbackName=QuestReceiveReserveParamInSectionRange
#include "G01RoomLevelStreamingInfo.generated.h"

class UG01LevelStreamingDataAsset;

USTRUCT(BlueprintType)
struct RS2RE_API FG01RoomLevelStreamingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01LevelStreamingDataAsset* LevelStreamingDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestReceiveReserveParamInSectionRange MCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReversalUseConditionSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct ConditionFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReversalUseConditionFlag;
    
    FG01RoomLevelStreamingInfo();
};

