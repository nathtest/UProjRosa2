#pragma once
#include "CoreMinimal.h"
#include "VFXID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXID -FallbackName=VFXID
#include "VFXManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXManagerBase -FallbackName=VFXManagerBase
#include "VFXResoureMapID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXResoureMapID -FallbackName=VFXResoureMapID
#include "G01VFXAppendInfo.h"
#include "G01VFXManagerInterface.h"
#include "G01VFXResourceInfo.h"
#include "OnCompleteAsyncLoadVFXAssetDelegate.h"
#include "LoadControlActorComponent.h"
#include "G01VFXManager.generated.h"

class AActor;
class UDataTable;
class UG01VFXHandle;
class ULoadControlActorComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01VFXManager : public AVFXManagerBase, public IG01VFXManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULoadControlActorComponent* MVFXLoadController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MRequestCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MVFXDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FVFXResoureMapID, FG01VFXResourceInfo> MVFXResourceMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleteAsyncLoadVFXAsset MOnCompleteAsyncLoadVFXAsset;
    
public:
    AG01VFXManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool StopVFX(UG01VFXHandle* InVFXHandle);
    
    UFUNCTION(BlueprintCallable)
    bool PlayVFX(UG01VFXHandle* InVFXHandle, const TArray<AActor*>& InOwnActorArray, const TArray<AActor*>& InOpponentActorArray, const FG01VFXAppendInfo& InVFXAppendInfo);
    
    UFUNCTION(BlueprintCallable)
    bool IsVFXResourceReady(FVFXID InVFXID, int32 InVFXRank);
    
    UFUNCTION(BlueprintCallable)
    bool DestroyVFXActor(UG01VFXHandle* InVFXHandle);
    
    UFUNCTION(BlueprintCallable)
    void DestroyHandle(UG01VFXHandle* InVFXHandle);
    
    UFUNCTION(BlueprintCallable)
    bool CreateVFXActor(UG01VFXHandle* InVFXHandle);
    

    // Fix for true pure virtual functions not being implemented
};

