#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "Templates/SubclassOf.h"
#include "SeqDefaultReplaceAnimActorInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class USeqDefaultReplaceAnimActorInf : public UInterface {
    GENERATED_BODY()
};

class ISeqDefaultReplaceAnimActorInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqReplaceActor_SetupVisual(TSubclassOf<AActor> InVisualClass);
    
};

