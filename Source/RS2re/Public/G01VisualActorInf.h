#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LipsyncParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=LipSyncCurve -ObjectName=LipsyncParam -FallbackName=LipsyncParam
#include "EG01LipSyncCustomUpdateType.h"
#include "EG01VAIkPartType.h"
#include "EG01VisualActorSizeType.h"
#include "G01GeneralLipPresetID.h"
#include "G01GeneralLipsyncPresetPlayArgs.h"
#include "G01LipsyncPlayArgs.h"
#include "G01VACcdikTargetParam.h"
#include "G01VisualActorInf.generated.h"

class UG01VisualActorParamDataAsset;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01VisualActorInf : public UInterface {
    GENERATED_BODY()
};

class IG01VisualActorInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_UnregisterIK(EG01VAIkPartType InPart);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_StopLipSync();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_StartDisintegration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_SetWeaponVisible(bool Invisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_SetLipsyncCustomTime(float InCustomTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_SetIsAddEmissiveBaseColor(bool InIsUseEmissiveBaseColor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_SetEmissiveRimReduce(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_SetEmissiveInvalidateMaskRate(float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_SetDisintegrationRate(float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_SetCustomizeBaseColor(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_SetAddEmissiveColor(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_RegisterIK_CCDIK(EG01VAIkPartType InPart, const FG01VACcdikTargetParam& InTargetParam, bool InIsActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_PlayMenuLipSync(FName InVoiceID, FG01LipsyncPlayArgs InPlayArgs, EG01LipSyncCustomUpdateType InCustomUpdateType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_PlayLipSync(FName InVoiceID, FG01LipsyncPlayArgs InPlayArgs, EG01LipSyncCustomUpdateType InCustomUpdateType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_PlayGeneralLipSync(FName InVoiceID, FG01GeneralLipPresetID InPresetID, FG01GeneralLipsyncPresetPlayArgs InPlayArgs, EG01LipSyncCustomUpdateType InCustomUpdateType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01VisualActor_IsPlayingLipSync();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EG01VisualActorSizeType Inf_G01VisualActor_GetSizeType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UG01VisualActorParamDataAsset* Inf_G01VisualActor_GetParamDataAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FLipsyncParam Inf_G01VisualActor_GetLipsyncParam();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_GetIkTargetParam_CCDIK(bool& OutIsFound, FG01VACcdikTargetParam& OutParam, EG01VAIkPartType InPart);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01VisualActor_DeactivateIK(EG01VAIkPartType InPart);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_ClearDisintegration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_AddLipsyncCustomTime(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01VisualActor_ActivateIK(EG01VAIkPartType InPart);
    
};

