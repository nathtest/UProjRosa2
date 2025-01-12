#pragma once
#include "CoreMinimal.h"
#include "LevelTransitionInfoView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelTransitionInfoView -FallbackName=LevelTransitionInfoView
#include "G01LevelMoveSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01LevelMoveSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelTransitionInfoView LevelID;
    
    RS2RE_API FG01LevelMoveSaveInfo();
};

