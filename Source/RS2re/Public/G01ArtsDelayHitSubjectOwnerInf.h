#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ArtsDelayHitNotify.h"
#include "G01ArtsDelayHitSubjectOwnerInf.generated.h"

class UG01ArtsDelayHitComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ArtsDelayHitSubjectOwnerInf : public UInterface {
    GENERATED_BODY()
};

class IG01ArtsDelayHitSubjectOwnerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_G01ArtsDelayHitSubject_OnArtsHit(UG01ArtsDelayHitComponent* InDelayHit, const FG01ArtsDelayHitNotify& InParam);
    
};

