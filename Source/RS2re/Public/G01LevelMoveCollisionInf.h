#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EAISpeed.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAISpeed -FallbackName=EAISpeed
#include "G01LevelMoveCollisionInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01LevelMoveCollisionInf : public UInterface {
    GENERATED_BODY()
};

class IG01LevelMoveCollisionInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LevelMoveCollision_GetPlayerMoveTarget(bool& OutExist, FVector& OutTargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LevelMoveCollision_GetMoveType(bool& OutExist, EAISpeed& OutMoveType);
    
};

