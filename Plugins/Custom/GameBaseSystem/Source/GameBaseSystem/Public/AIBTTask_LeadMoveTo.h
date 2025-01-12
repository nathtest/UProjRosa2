#pragma once
#include "CoreMinimal.h"
#include "AIBTTask_FollowMoveTo.h"
#include "AIBTTask_LeadMoveTo.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UAIBTTask_LeadMoveTo : public UAIBTTask_FollowMoveTo {
    GENERATED_BODY()
public:
    UAIBTTask_LeadMoveTo();

};

