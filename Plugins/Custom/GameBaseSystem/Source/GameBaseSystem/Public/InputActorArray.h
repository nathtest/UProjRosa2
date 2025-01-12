#pragma once
#include "CoreMinimal.h"
#include "InputActorArray.generated.h"

class AInputObjectBase;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FInputActorArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AInputObjectBase*> Array;
    
    FInputActorArray();
};

