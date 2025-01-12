#pragma once
#include "CoreMinimal.h"
#include "CollisionObjectBase.h"
#include "EventCollisionEventInfo.h"
#include "EventCollisionObjectBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AEventCollisionObjectBase : public ACollisionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventCollisionEventInfo> MInteractParam;
    
public:
    AEventCollisionObjectBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HitInteractMovementBp();
    
};

