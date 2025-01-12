#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DropItemTableID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=DropItemTableID -FallbackName=DropItemTableID
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "SQEXSeadHandleBP.h" //CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSeadHandleBP -FallbackName=SQEXSeadHandleBP
#include "G01TreasureBoxInfoTableRow.h"
#include "Templates/SubclassOf.h"
#include "G01GimmickManagerInterface.generated.h"

class AGimmickObjectBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GimmickManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01GimmickManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GimmickManager_RegisterDoorOpenSoundHandle(FSQEXSeadHandleBP InSoundHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GimmickManager_LockInput(bool InIsLock);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GimmickManager_GetTreasureBoxInfo(const FDropItemTableID& InDropItemID, FG01TreasureBoxInfoTableRow& OutTreasureBoxInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GimmickManager_FindGimmickByRoomID(FRoomID InRoomId, TArray<AGimmickObjectBase*>& ReGimmickList, TArray<AGimmickObjectBase*>& ReAdjoinGimmickList, TSubclassOf<AGimmickObjectBase> InFilterClass);
    
};

