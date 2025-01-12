#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01CharacterID.h"
#include "G01MusicAppreciationUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MusicAppreciationUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01MusicAppreciationUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MusicAppreciationUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MusicAppreciationUiController_ChangeCharacter(const FG01CharacterID& InCharaID);
    
};

