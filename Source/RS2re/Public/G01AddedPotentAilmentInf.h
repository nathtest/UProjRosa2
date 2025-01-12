#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01AddedPotentAilmentInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01AddedPotentAilmentInf : public UInterface {
    GENERATED_BODY()
};

class IG01AddedPotentAilmentInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotent_UseFaintPose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotent_UseAilmentPose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotent_ProcessTaskByConfuse(const int32& InActionCountID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotent_ProcessTaskByCharm(const int32& InActionCountID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotent_NeedChangePose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotent_IsSkipAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotent_IsRemoveTimelineForTurnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotent_IsRemoveTimelineForNextTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotent_IsNotGrowthAtResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotent_IsFormationJammer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotent_IsEquateToDefeat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotent_IsCanNotPassive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotent_IsCanNotLink();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01AddedPotent_IsCanNotLearn();
    
};

