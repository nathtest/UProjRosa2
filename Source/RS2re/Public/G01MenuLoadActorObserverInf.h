#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01MenuAnimationEnum.h"
#include "G01MenuLoadActorObserverInf.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MenuLoadActorObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01MenuLoadActorObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MenuLoadActorItem_Complete(const FName& InName, const bool InIsLeft, UClass* InModelClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MenuLoadActor_Complete(const FName& InName, UClass* InModelClass, const TMap<EG01MenuAnimationEnum, UObject*>& InAnimationObjects);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MenuLoadActor_AnimationComplete(const FName& InName, const EG01MenuAnimationEnum InAnimationEnum, UObject* InAnimationObject);
    
};

