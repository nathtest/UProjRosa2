#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01AddedPotentAilmentActionStruct.h"
#include "G01AddedPotentAilmentCureStruct.h"
#include "G01AddedPotentAilmentGrowthStruct.h"
#include "G01AddedPotentAilmentPoseStruct.h"
#include "G01AddedPotentAilmentTimeLineStruct.h"
#include "G01AddedPotentAilmentTimelineNewStruct.h"
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01AddedPotentAilmentTableRowStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01AddedPotentAilmentTableRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AddedPotentBaseKeyStruct Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AddedPotentAilmentTimeLineStruct Timeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AddedPotentAilmentTimelineNewStruct NewTimeLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AddedPotentAilmentCureStruct Cure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AddedPotentAilmentActionStruct Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AddedPotentAilmentPoseStruct Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AddedPotentAilmentGrowthStruct Growth;
    
    RS2RE_API FG01AddedPotentAilmentTableRowStruct();
};

