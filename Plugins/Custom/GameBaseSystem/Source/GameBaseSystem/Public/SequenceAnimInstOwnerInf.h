#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SeqActorBinder_HijackSettings.h"
#include "SequenceAnimInstOwnerInf.generated.h"

UINTERFACE(Blueprintable)
class USequenceAnimInstOwnerInf : public UInterface {
    GENERATED_BODY()
};

class ISequenceAnimInstOwnerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_SequenceAnimInst_NotifySequenceReleased(const FSeqActorBinder_HijackSettings& InHijackSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_SequenceAnimInst_NotifySequenceControlled(const FSeqActorBinder_HijackSettings& InHijackSettings);
    
};

