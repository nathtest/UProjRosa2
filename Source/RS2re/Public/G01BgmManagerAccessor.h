#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EG01BgmUnregisterBySystemType.h"
#include "G01BgmLayer.h"
#include "G01BgmRegister.h"
#include "G01BgmRequest.h"
#include "G01BgmTableRow.h"
#include "G01BgmManagerAccessor.generated.h"

class UG01BgmLayerHandleObject;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BgmManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01BgmManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFirstPriorityBgm();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnregisterBySystem(EG01BgmUnregisterBySystemType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnregisterByLayer(G01BgmLayer InLayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnregisterAll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Unregister(const FG01BgmRequest& InRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SuspensionBgmTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVolumeMultiplier(FG01BgmRequest InRequest, float InVolumeMultipier, float InFadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUseRemakeBgm(bool isFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMasterVolume(float InVolume, float InFadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMainBgmByLayer(G01BgmLayer InLayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMainBgm(const FG01BgmRequest& InRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFadeOutTime(const FG01BgmRequest& InRequest, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFadeInTime(const FG01BgmRequest& InRequest, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCategoryVolume(FName InCategory, float InVolume, float InFadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Resume();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetMainBgm(const FG01BgmRequest& InRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Reregister();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Register(const FG01BgmRequest& InRequest, bool& OutIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NeedForceFadeOutModeByLayer(G01BgmLayer InLayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NeedForceFadeOutMode(FG01BgmRequest InRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetUseRemakeBgm();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetTableRow(const FG01BgmRequest& InRequest, bool& OutIsExist, FG01BgmTableRow& OutTableRow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetRegisterAll(TArray<FG01BgmRegister>& OutRegisterInfoList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetRegister(G01BgmLayer InLayer, bool& OutIsRegister, FG01BgmRegister& OutRegisterInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetMasterVolume(float& OutVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetMainBgm(bool& OutIsRegister, FG01BgmRequest& OutRequest, G01BgmLayer& OutLayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetLayerHandleOwner(G01BgmLayer InLayer, UObject*& OutOwnerObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetLayerHandle(UObject* InOwnerObject, G01BgmLayer InLayer, bool InNotWarning, UG01BgmLayerHandleObject*& OutHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetForcedLayerHandle(G01BgmLayer InLayer, UG01BgmLayerHandleObject*& OutHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetCurrentPlay(bool& OutIsRegister, FG01BgmRegister& OutRegisterInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetCategoryVolume(FName InCategory, float& OutVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeSuspensionBgmTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckSuspensionBgmTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckRegisterByLayer(G01BgmLayer InLayer, bool& OutIsRegister);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckRegister(const FG01BgmRequest& InRequest, bool& OutIsRegister);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckListenedEvenOnce(FG01BgmRequest InRequest);
    
};

