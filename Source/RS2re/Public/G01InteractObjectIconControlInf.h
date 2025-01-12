#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01InteractObjectIconType.h"
#include "G01InteractObjectIconControlInf.generated.h"

class AActor;
class USceneComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01InteractObjectIconControlInf : public UInterface {
    GENERATED_BODY()
};

class IG01InteractObjectIconControlInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01InteractObjectIconControlInf_DeactivateIcon(AActor* InSourceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01InteractObjectIconControlInf_ActivateIcon(AActor* InSourceActor, USceneComponent* InAttachComponent, EG01InteractObjectIconType InIconType);
    
};

