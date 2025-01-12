#pragma once
#include "CoreMinimal.h"
#include "LevelObjectID.h"
#include "RangeIconCollisionObjectStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRangeIconCollisionObjectStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaRangeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> DestinationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelObjectID DestinationLevelObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchDistinationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DispText;
    
    GAMEBASESYSTEM_API FRangeIconCollisionObjectStruct();
};

