#pragma once
#include "CoreMinimal.h"
#include "EAISpeed.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAISpeed -FallbackName=EAISpeed
#include "LevelMoveCollisionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelMoveCollisionObjectBase -FallbackName=LevelMoveCollisionObjectBase
#include "G01InteractUiContUserInf.h"
#include "G01LevelMoveCollisionInf.h"
#include "G01LevelMoveInf.h"
#include "G01LevelMoveCollisionObjectBase.generated.h"

class ATargetPointBase;
class UG01StageManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01LevelMoveCollisionObjectBase : public ALevelMoveCollisionObjectBase, public IG01InteractUiContUserInf, public IG01LevelMoveCollisionInf, public IG01LevelMoveInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01StageManagerAccessor* StageManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ATargetPointBase> MoveTargetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAISpeed MoveType;
    
public:
    AG01LevelMoveCollisionObjectBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

