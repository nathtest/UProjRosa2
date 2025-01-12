#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ItemAttachComponentInf.generated.h"

class USkeletalMeshComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ItemAttachComponentInf : public UInterface {
    GENERATED_BODY()
};

class IG01ItemAttachComponentInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* Inf_G01ItemAttachComponentInf_GetSkeletalMeshComponent();
    
};

