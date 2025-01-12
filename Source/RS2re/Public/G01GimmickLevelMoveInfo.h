#pragma once
#include "CoreMinimal.h"
#include "LevelTransitionInfoView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelTransitionInfoView -FallbackName=LevelTransitionInfoView
#include "G01GimmickLevelMoveInfo.generated.h"

class APlayerStart;

USTRUCT(BlueprintType)
struct FG01GimmickLevelMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APlayerStart> TargetPlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelTransitionInfoView MDestinationLevelID;
    
    RS2RE_API FG01GimmickLevelMoveInfo();
};

