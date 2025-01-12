#pragma once
#include "CoreMinimal.h"
#include "CollisionEventInfoBase.h"
#include "LevelTransitionInfoView.h"
#include "LevelMoveCollisionEventInfo.generated.h"

class APlayerStart;

USTRUCT(BlueprintType)
struct FLevelMoveCollisionEventInfo : public FCollisionEventInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APlayerStart> TargetPlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelTransitionInfoView MDestinationLevelID;
    
    GAMEBASESYSTEM_API FLevelMoveCollisionEventInfo();
};

