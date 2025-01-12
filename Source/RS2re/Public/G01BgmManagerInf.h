#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01BgmUnregisterBySystemType.h"
#include "G01BgmLayer.h"
#include "G01BgmRegister.h"
#include "G01BgmRequest.h"
#include "G01BgmTableRow.h"
#include "G01BgmManagerInf.generated.h"

class UG01BgmLayerHandleObject;
class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BgmManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01BgmManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_UpdateFirstPriorityBgm();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_UnregisterBySystem(EG01BgmUnregisterBySystemType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_UnregisterByLayer(G01BgmLayer InLayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_UnregisterAll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_Unregister(const FG01BgmRequest& InRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_SetVolumeMultiplier(FG01BgmRequest InRequest, float InVolumeMultipier, float InFadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_SetUseRemakeBgm(bool isFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void inf_BgmMgr_SetMasterVolume(float InVolume, float InFadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void inf_BgmMgr_SetMainBgmByLayer(G01BgmLayer InLayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void inf_BgmMgr_SetMainBgm(const FG01BgmRequest& InRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void inf_BgmMgr_SetFadeOutTime(const FG01BgmRequest& InRequest, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void inf_BgmMgr_SetFadeInTime(const FG01BgmRequest& InRequest, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void inf_BgmMgr_SetCategoryVolume(FName InCategory, float InVolume, float InFadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_SaveToSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_Resume();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void inf_BgmMgr_ResetMainBgm(const FG01BgmRequest& InRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_Reregister();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_RegisterForce(const FG01BgmRequest& InRequest, bool& OutIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_Register(const FG01BgmRequest& InRequest, bool& OutIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_NeedForceFadeOutByLayer(const G01BgmLayer& InLayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_NeedForceFadeOut(const FG01BgmRequest& InRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_LoadFromSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_BgmMgr_GetUseRemakeBgm();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_GetTableRow(const FG01BgmRequest& InRequest, bool& OutIsExist, FG01BgmTableRow& OutTableRow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_GetRegisterAll(TArray<FG01BgmRegister>& OutRegisterInfoList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_GetRegister(G01BgmLayer InLayer, bool& OutIsRegister, FG01BgmRegister& OutRegisterInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void inf_BgmMgr_GetMasterVolume(float& OutVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void inf_BgmMgr_GetMainBgm(bool& OutIsRegister, FG01BgmRequest& OutRequest, G01BgmLayer& OutLayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_GetLayerHandleOwner(const G01BgmLayer& InLayer, UObject*& OutOwnerObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_GetLayerHandle(UObject* InOwnerObject, const G01BgmLayer& InLayer, bool InNotWarning, UG01BgmLayerHandleObject*& OutHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_GetForcedLayerHandle(const G01BgmLayer& InLayer, UG01BgmLayerHandleObject*& OutHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_GetCurrentPlay(bool& OutIsRegister, FG01BgmRegister& OutRegisterInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void inf_BgmMgr_GetCategoryVolume(FName InCategory, float& OutVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void inf_BgmMgr_GetCacheMasterVolume(float& OutVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_CheckRegisterByLayer(G01BgmLayer InLayer, bool& OutIsRegister);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BgmMgr_CheckRegister(const FG01BgmRequest& InRequest, bool& OutIsRegister);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_BgmMgr_CheckListenedEvenOnce(const FG01BgmRequest& InRequest);
    
};

