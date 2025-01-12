#pragma once
#include "CoreMinimal.h"
#include "TargetQuestInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=TargetQuestInfo -FallbackName=TargetQuestInfo
#include "G01DestinationData.h"
#include "G01QuestTargetDestData.generated.h"

USTRUCT(BlueprintType)
struct FG01QuestTargetDestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetQuestInfo MTargetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01DestinationData MDestData;
    
    RS2RE_API FG01QuestTargetDestData();
};

