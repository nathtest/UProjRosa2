#pragma once
#include "CoreMinimal.h"
#include "CollisionObjectViewStruct.generated.h"

USTRUCT(BlueprintType)
struct FCollisionObjectViewStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MCollisionObjectID;
    
    GAMEBASESYSTEM_API FCollisionObjectViewStruct();
};

