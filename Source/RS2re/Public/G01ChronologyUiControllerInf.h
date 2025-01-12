#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "G01CharacterID.h"
#include "G01ChronologyUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ChronologyUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01ChronologyUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ChronologyUiController_SetModelPosition(FVector Position, float RotationZ);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ChronologyUiController_OnOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ChronologyUiController_OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ChronologyUiController_DebugOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ChronologyUiController_ChangeCharacter(FG01CharacterID InCharacterId);
    
};

