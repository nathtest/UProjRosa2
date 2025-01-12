#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01VisualActorLoaderOwnerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01VisualActorLoaderOwnerInf : public UInterface {
    GENERATED_BODY()
};

class IG01VisualActorLoaderOwnerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_G01VisualActorLoader_FinishLoadedVisualActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_G01VisualActorLoader_FinishLoadedAnimation();
    
};

