#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LevelObjectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelObjectID -FallbackName=LevelObjectID
#include "EG01InteractObjectIconType.h"
#include "EG01NpcIconTypeEnum.h"
#include "G01HudMapObjectIconInf.generated.h"

class AG01RangeIconCollisionObjectBase;
class USceneComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01HudMapObjectIconInf : public UInterface {
    GENERATED_BODY()
};

class IG01HudMapObjectIconInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudMapObjectIcon_IsRangeIconCollisionObject(bool& IsRangeIconObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudMapObjectIcon_IsInvalidDestinationObject(bool& IsInvalid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudMapObjectIcon_IsHighLight(bool& IsHighLight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudMapObjectIcon_IsDiscover(bool& IsDiscover);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudMapObjectIcon_GetRangeIconCollisionObject(AG01RangeIconCollisionObjectBase*& OutCollisionObject, USceneComponent*& InPositionComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudMapObjectIcon_GetObjectIconType(EG01InteractObjectIconType& OutObjectIconType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudMapObjectIcon_GetNpcObjectIconType(EG01InteractObjectIconType& OutNpcObjectIconType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudMapObjectIcon_GetNpcIconType(EG01NpcIconTypeEnum& OutNpcIconType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudMapObjectIcon_GetFieldMapRangeIconCollisionObject(AG01RangeIconCollisionObjectBase*& OutCollisionObject, USceneComponent*& InPositionComponent, bool& IsRangeIn, bool& IsDestinationRangeIn, FVector& InRangePosition, FLevelObjectID& InLevelObjectID);
    
};

