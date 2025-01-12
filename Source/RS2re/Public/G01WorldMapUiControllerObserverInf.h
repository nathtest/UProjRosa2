#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01WorldMapUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01WorldMapUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01WorldMapUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01WorldMapUiController_ShortCutOpen(FName MapName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01WorldMapUiController_ShortAreaCutOpen(FName MapName, FName AreaName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01WorldMapUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01WorldMapUiController_Close();
    
};

