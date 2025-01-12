#pragma once
#include "CoreMinimal.h"
#include "CollisionObjOverlapParam.h"
#include "CollisionObjectManagerInf.h"
#include "ManagerBase.h"
#include "CollisionObjectManager.generated.h"

class ACollisionObjectBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ACollisionObjectManager : public AManagerBase, public ICollisionObjectManagerInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ACollisionObjectBase*> MUniqueCollisionObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACollisionObjectBase*> MUnknownCollisionObjects;
    
public:
    ACollisionObjectManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void Notify_AnyCollisionObjectOverlap(const FCollisionObjOverlapParam& InOverlapParam);
    

    // Fix for true pure virtual functions not being implemented
};

