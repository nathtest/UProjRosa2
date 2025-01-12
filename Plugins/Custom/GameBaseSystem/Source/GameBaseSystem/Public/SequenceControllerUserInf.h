#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SeqGeneralEventParam.h"
#include "SequenceControllerUserInf.generated.h"

class AActor;
class ASequenceController;

UINTERFACE(Blueprintable, MinimalAPI)
class USequenceControllerUserInf : public UInterface {
    GENERATED_BODY()
};

class ISequenceControllerUserInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_SeqContUser_OnTriggerEvent(ASequenceController* InController, const FSeqGeneralEventParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_SeqContUser_OnTickRepeaterEvent(ASequenceController* InController, const FSeqGeneralEventParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_SeqContUser_OnEndRepeaterEvent(ASequenceController* InController, const FSeqGeneralEventParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqContUser_OnChangeEnableCameraCut(ASequenceController* InController, bool InIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqContUser_OnChangeActiveCamera(ASequenceController* InController, AActor* InActiveCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_SeqContUser_OnBeginRepeaterEvent(ASequenceController* InController, const FSeqGeneralEventParam& InParam);
    
};

