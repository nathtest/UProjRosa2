#pragma once
#include "CoreMinimal.h"
#include "PositionComponents.generated.h"

class UChildAttachPositionComponentBase;

USTRUCT(BlueprintType)
struct FPositionComponents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UChildAttachPositionComponentBase*> MPositions;
    
    GAMEBASESYSTEM_API FPositionComponents();
};

