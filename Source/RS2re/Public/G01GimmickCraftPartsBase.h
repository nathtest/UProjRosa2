#pragma once
#include "CoreMinimal.h"
#include "DropItem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=DropItem -FallbackName=DropItem
#include "DropItemTableID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=DropItemTableID -FallbackName=DropItemTableID
#include "FlagAccessParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagAccessParam -FallbackName=FlagAccessParam
#include "GimmickFlagInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GimmickFlagInfo -FallbackName=GimmickFlagInfo
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01FieldItemIDStruct.h"
#include "G01GimmickObjectBase.h"
#include "G01GimmickCraftPartsBase.generated.h"

class UFlagSystemManagerAccessCompo;

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickCraftPartsBase : public AG01GimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MMaterialEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropItemTableID MDropItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01FieldItemIDStruct MFieldItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGimmickFlagInfo MTargetFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* MFlagManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagAccessParam MFlagAccessParam;
    
public:
    AG01GimmickCraftPartsBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFlagTrue();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LotteryDropItem(bool& OutSuccess, bool& OutInvalidDropItemID, FDropItem& OutDropItem);
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetFlag();
    
};

