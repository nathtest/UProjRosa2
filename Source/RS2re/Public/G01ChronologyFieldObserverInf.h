#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ChronologyFieldObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ChronologyFieldObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01ChronologyFieldObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01ChronologyField_OutCharacterEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01ChronologyField_InCharacterEnd();
    
};

