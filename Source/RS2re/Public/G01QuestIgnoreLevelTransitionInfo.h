#pragma once
#include "CoreMinimal.h"
#include "LevelTransitionInfoView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelTransitionInfoView -FallbackName=LevelTransitionInfoView
#include "G01QuestIgnoreLevelTransitionInfo.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01QuestIgnoreLevelTransitionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelTransitionInfoView> LevelTransitionIDList;
    
    FG01QuestIgnoreLevelTransitionInfo();
};

