#pragma once
#include "CoreMinimal.h"
#include "CollisionEventInfoBase.h"
#include "EventCollisionEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FEventCollisionEventInfo : public FCollisionEventInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> MGenericArguments;
    
    GAMEBASESYSTEM_API FEventCollisionEventInfo();
};

