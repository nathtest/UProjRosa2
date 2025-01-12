#pragma once
#include "CoreMinimal.h"
#include "DropItem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=DropItem -FallbackName=DropItem
#include "DropItemTableID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=DropItemTableID -FallbackName=DropItemTableID
#include "FlagAccessParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagAccessParam -FallbackName=FlagAccessParam
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01FieldItemIDStruct.h"
#include "G01GimmickObjectBase.h"
#include "G01MsgSingleUiControllerUserInf.h"
#include "G01GimmickTreasureChestBase.generated.h"

class UFlagSystemManagerAccessCompo;
class UG01MsgRootComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickTreasureChestBase : public AG01GimmickObjectBase, public IG01MsgSingleUiControllerUserInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MTreasureChestEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropItemTableID MDropItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01FieldItemIDStruct MFieldItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01MsgRootComponent* MMessageRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* MFlagManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagAccessParam MFlagAccessParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagAccessParam MDiscoverFlagAccessParam;
    
public:
    AG01GimmickTreasureChestBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFlagTrue();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableCollision(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDiscoveredFlagTrue();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LotteryDropItem(bool& OutSuccess, bool& OutInvalidDropItemID, FDropItem& OutDropItem);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsDiscovered();
    
    UFUNCTION(BlueprintCallable)
    bool GetFlag();
    

    // Fix for true pure virtual functions not being implemented
};

