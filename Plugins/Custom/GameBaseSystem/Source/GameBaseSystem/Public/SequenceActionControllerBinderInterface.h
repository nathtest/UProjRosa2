#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SeqBinderTransformOverrideParam.h"
#include "SequenceActionControllerBinderInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class USequenceActionControllerBinderInterface : public UInterface {
    GENERATED_BODY()
};

class ISequenceActionControllerBinderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ActionBinder_OnUpdateTransformOverrideParams(const FSeqBinderTransformOverrideParam& InParam);
    
};

