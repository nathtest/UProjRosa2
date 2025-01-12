#pragma once
#include "CoreMinimal.h"
#include "LevelTransitionInfoView.h"
#include "RoomID.h"
#include "LevelTransitionInfo.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FLevelTransitionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelTransitionInfoView MLevelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> MTransitionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MPlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomID PrevRoomID;
    
    GAMEBASESYSTEM_API FLevelTransitionInfo();
};

