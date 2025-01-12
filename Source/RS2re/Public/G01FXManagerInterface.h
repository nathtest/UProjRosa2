#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EffectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EffectID -FallbackName=EffectID
#include "EffectLoadInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EffectLoadInfo -FallbackName=EffectLoadInfo
#include "FXDataRow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FXDataRow -FallbackName=FXDataRow
#include "G01FXAppendInfo.h"
#include "G01FXPointInfo.h"
#include "G01FXManagerInterface.generated.h"

class UG01FXHandle;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FXManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01FXManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01FXManager_StopFX(UG01FXHandle* InFxHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FXManager_ReleaseAllAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01FXManager_PlayFX(UG01FXHandle* InFxHandle, const TArray<FG01FXPointInfo>& InBasePointInfo, const TArray<FG01FXPointInfo>& InTargetPointInfo, const FG01FXAppendInfo& InFxAppendInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01FXManager_IsFXResourceReady(FEffectID InFXID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FXManager_FindEffectData(const FEffectID& InEffectID, FFXDataRow& ReDataRow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FXManager_DestroyHandle(UG01FXHandle* InFxHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01FXManager_DestroyFXActor(UG01FXHandle* InFxHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FXManager_CreateHandles(const TArray<FEffectLoadInfo>& InFXIDList, TArray<UG01FXHandle*>& OutHandleList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UG01FXHandle* Inf_G01FXManager_CreateHandle(FEffectLoadInfo InFXID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01FXManager_CreateFXActor(UG01FXHandle* InFxHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FXManager_AsyncLoadAssetReq(const TArray<FEffectLoadInfo>& InFXIDList, int32& OutRequestIndex);
    
};

