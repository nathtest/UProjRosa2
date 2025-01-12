#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01VABasePoseAnimLayerType.h"
#include "G01VAAnimInstBasePoseData.h"
#include "G01VAAnimInstPoseBlendSettings.h"
#include "G01VisualActorAnimInstInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01VisualActorAnimInstInterface : public UInterface {
    GENERATED_BODY()
};

class IG01VisualActorAnimInstInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_StartWarmUp(int32 InWarmUpFrames);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_SetRotationThresholdScale(float InScale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_SetPoseBlendSettings(FG01VAAnimInstPoseBlendSettings InBlendSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_SetEnablePoseBlend_LookControl(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_SetEnablePoseBlend_LipSync(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_SetEnablePoseBlend_Facial(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_SetDistanceThresholdScale(float InScale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_RawChangeBasePoseAnimLayer(FG01VAAnimInstBasePoseData InData, float InPoseTypeBlendTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_ChangeBasePoseAnimLayer(EG01VABasePoseAnimLayerType InLayerType, float InPoseTypeBlendTime);
    
};

