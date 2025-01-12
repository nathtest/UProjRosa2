#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActorVisibleRequest.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FActorVisibleRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Requester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> TargetClasses;
    
    FActorVisibleRequest();
};

