#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ItemObjectInf.generated.h"

class USkeletalMeshComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ItemObjectInf : public UInterface {
    GENERATED_BODY()
};

class IG01ItemObjectInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* Inf_G01ItemObject_GetSkeletalMeshComponent();
    
};

