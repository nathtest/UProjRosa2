#pragma once
#include "CoreMinimal.h"
#include "EffectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EffectID -FallbackName=EffectID
#include "FXManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FXManagerBase -FallbackName=FXManagerBase
#include "G01FXAppendInfo.h"
#include "G01FXManagerInterface.h"
#include "G01FXPointInfo.h"
#include "G01FXResourceInfo.h"
#include "OnCompleteAsyncLoadAssetDelegate.h"
#include "G01FXManager.generated.h"

class UDataTable;
class UG01FXHandle;
class ULoadControlActorComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01FXManager : public AFXManagerBase, public IG01FXManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULoadControlActorComponent* MFxLoadController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MRequestCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MFXDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MFXPlayArgsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FEffectID, FG01FXResourceInfo> MFxResourceMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleteAsyncLoadAsset MOnCompleteAsyncLoadAsset;
    
public:
    AG01FXManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool StopFX(UG01FXHandle* InFxHandle);
    
    UFUNCTION(BlueprintCallable)
    bool PlayFX(UG01FXHandle* InFxHandle, const TArray<FG01FXPointInfo>& InBasePointInfo, const TArray<FG01FXPointInfo>& InTargetPointInfo, const FG01FXAppendInfo& InFxAppendInfo);
    
    UFUNCTION(BlueprintCallable)
    bool IsFXResourceReady(FEffectID InFXID);
    
    UFUNCTION(BlueprintCallable)
    void DestroyHandle(UG01FXHandle* InHandle);
    
    UFUNCTION(BlueprintCallable)
    bool DestroyFXActor(UG01FXHandle* InFxHandle);
    
    UFUNCTION(BlueprintCallable)
    bool CreateFXActor(UG01FXHandle* InFxHandle);
    

    // Fix for true pure virtual functions not being implemented
};

