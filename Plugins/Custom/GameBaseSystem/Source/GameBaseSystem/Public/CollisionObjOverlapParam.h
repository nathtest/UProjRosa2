#pragma once
#include "CoreMinimal.h"
#include "ECollisionObjOverlapType.h"
#include "CollisionObjOverlapParam.generated.h"

class AActor;
class ACollisionObjectBase;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FCollisionObjOverlapParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionObjOverlapType MOverlapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MCollisionObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACollisionObjectBase* MOverlappedCollisionObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* MOverlappedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MOtherActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* MOtherComponent;
    
    GAMEBASESYSTEM_API FCollisionObjOverlapParam();
};

