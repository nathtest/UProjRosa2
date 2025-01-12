#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01CharacterID.h"
#include "G01SkillDerivativeUiControllerInf.generated.h"

class UAppUserWidgetDataObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01SkillDerivativeUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01SkillDerivativeUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SkillDerivativeUiController_SetSkillLearnArtsList(UAppUserWidgetDataObject* InWidgetData, FG01CharacterID InCharacterId, FName SkillID);
    
};

