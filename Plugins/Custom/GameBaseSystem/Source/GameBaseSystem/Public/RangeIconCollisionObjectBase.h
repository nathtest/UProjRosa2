#pragma once
#include "CoreMinimal.h"
#include "CollisionObjectBase.h"
#include "EventCollisionEventInfo.h"
#include "RangeIconCollisionObjectStruct.h"
#include "RangeIconCollisionObjectBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ARangeIconCollisionObjectBase : public ACollisionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventCollisionEventInfo> MInteractParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRangeIconCollisionObjectStruct MRangeIconSettingParam;
    
public:
    ARangeIconCollisionObjectBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HitInteractMovementBp();
    
};

