#pragma once
#include "CoreMinimal.h"
#include "DropItemTableID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=DropItemTableID -FallbackName=DropItemTableID
#include "GimmickManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GimmickManagerAccessor -FallbackName=GimmickManagerAccessor
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "SQEXSeadHandleBP.h" //CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSeadHandleBP -FallbackName=SQEXSeadHandleBP
#include "G01TreasureBoxInfoTableRow.h"
#include "Templates/SubclassOf.h"
#include "G01GimmickManagerAccessor.generated.h"

class AGimmickObjectBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01GimmickManagerAccessor : public UGimmickManagerAccessor {
    GENERATED_BODY()
public:
    UG01GimmickManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLevelMoveStartedByGimmick(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDoorOpenSoundHandle(FSQEXSeadHandleBP InSoundHandle);
    
    UFUNCTION(BlueprintCallable)
    void LockInput(bool InIsLock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTreasureBoxInfo(const FDropItemTableID& InDropItemID, FG01TreasureBoxInfoTableRow& OutTreasureBoxInfo) const;
    
    UFUNCTION(BlueprintCallable)
    void FindGimmickByRoomID(FRoomID InRoomId, TArray<AGimmickObjectBase*>& OutGimmickList, TArray<AGimmickObjectBase*>& OutAdjoinGimmickList, TSubclassOf<AGimmickObjectBase> InFilterClass);
    
};

