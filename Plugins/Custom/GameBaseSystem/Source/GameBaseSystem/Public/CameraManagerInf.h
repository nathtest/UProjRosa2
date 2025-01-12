#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EViewTargetBlendFunction -FallbackName=EViewTargetBlendFunction
#include "CameraShakeID.h"
#include "CameraShakeParamTableRow.h"
#include "Templates/SubclassOf.h"
#include "CameraManagerInf.generated.h"

class ACameraActorBase;
class UCameraShakeBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UCameraManagerInf : public UInterface {
    GENERATED_BODY()
};

class ICameraManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_CameraManager_StopCameraShakeAll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_CameraManager_StopCameraShake(UCameraShakeBase* InShakeInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ACameraActorBase* Inf_CameraManager_GetSequenceCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ACameraActorBase* Inf_CameraManager_GetCurrentCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_CameraManager_FindCameraShakeParam(bool& OutIsFound, FCameraShakeParamTableRow& OutParam, const FCameraShakeID& InID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UCameraShakeBase* Inf_CameraManager_ExecCameraShake(TSubclassOf<UCameraShakeBase> InShakeClass, FCameraShakeID InShakeID, float InShakeScale);
    
    //UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    //void Inf_CameraManager_ChangeSequenceCamera(float InBlendTime, TEnumAsByte<EViewTargetBlendFunction> InBlendFunc, float InBlendExp);
    
    //UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    //void Inf_CameraManager_ChangePrevCamera(float InBlendTime, TEnumAsByte<EViewTargetBlendFunction> InBlendFunc, float InBlendExp);
    
};

