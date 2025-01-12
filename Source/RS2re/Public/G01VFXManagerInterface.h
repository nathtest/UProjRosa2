#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "VFXDataRow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXDataRow -FallbackName=VFXDataRow
#include "VFXID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXID -FallbackName=VFXID
#include "VFXLoadInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXLoadInfo -FallbackName=VFXLoadInfo
#include "G01VFXAppendInfo.h"
#include "G01VFXManagerInterface.generated.h"

class AActor;
class UG01VFXHandle;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01VFXManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01VFXManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01VFXManager_StopVFX(UG01VFXHandle* InVFXHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VFXManager_ReleaseAllAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01VFXManager_PlayVFX(UG01VFXHandle* InVFXHandle, const TArray<AActor*>& InOwnActorArray, const TArray<AActor*>& InOpponentActorArray, const FG01VFXAppendInfo& InVFXAppendInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01VFXManager_IsVFXResourceReady(FVFXID InVFXID, int32 InVFXRank);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VFXManager_FindVFXData(const FVFXID& InVFXID, FVFXDataRow& ReDataRow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01VFXManager_DestroyVFXActor(UG01VFXHandle* InVFXHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VFXManager_DestroyHandle(UG01VFXHandle* InVFXHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01VFXManager_CreateVFXActor(UG01VFXHandle* InVFXHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VFXManager_CreateHandles(const TArray<FVFXLoadInfo>& InVFXIDList, TArray<UG01VFXHandle*>& OutHandleList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UG01VFXHandle* Inf_G01VFXManager_CreateHandle(FVFXLoadInfo InFXID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VFXManager_AsyncLoadAssetReq(const TArray<FVFXLoadInfo>& InFXIDList, int32& OutRequestIndex);
    
};

