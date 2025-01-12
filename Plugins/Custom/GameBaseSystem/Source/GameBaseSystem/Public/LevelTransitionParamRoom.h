#pragma once
#include "CoreMinimal.h"
#include "RoomID.h"
#include "LevelTransitionParamRoom.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FLevelTransitionParamRoom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomID> RoomIDs;
    
    FLevelTransitionParamRoom();
};

