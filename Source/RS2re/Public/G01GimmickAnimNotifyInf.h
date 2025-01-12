#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01GimmickAnimNotifyInf.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GimmickAnimNotifyInf : public UInterface {
    GENERATED_BODY()
};

class IG01GimmickAnimNotifyInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GimmickAnimNotify_Notify(USkeletalMeshComponent* InMesh, UAnimSequenceBase* InAnimation, FName ID);
    
};

