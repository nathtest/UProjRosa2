#pragma once
#include "CoreMinimal.h"
#include "InteractColliderTag.h"
#include "EventArguments.generated.h"

USTRUCT(BlueprintType)
struct FEventArguments {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractColliderTag MInteractTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> MGenericArgs;
    
    GAMEBASESYSTEM_API FEventArguments();
};

