#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h"
#include "RoomID.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FRoomID : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FRoomID();
};
FORCEINLINE uint32 GetTypeHash(const FRoomID) { return 0; }

