#pragma once
#include "CoreMinimal.h"
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "RoomManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomManagerBase -FallbackName=RoomManagerBase
#include "G01BgmRequest.h"
#include "G01RoomLinkInfo.h"
#include "G01RoomManagerInterface.h"
#include "G01RoomParamTableRow.h"
#include "Templates/SubclassOf.h"
#include "G01RoomManager.generated.h"

class AActor;
class UDataTable;
class UFlagSystemManagerAccessCompo;

UCLASS(Blueprintable)
class RS2RE_API AG01RoomManager : public ARoomManagerBase, public IG01RoomManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRoomID, FG01RoomParamTableRow> RoomParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomID PreRoomID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* FlagManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableLevelStreamingRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MLevelTransitionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BattleFieldParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RoomScaleTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> MCustomDestDispClassMapCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FRoomID, FG01RoomLinkInfo> RoomLinkMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MapOpenCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBattle;
    
public:
    AG01RoomManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRoomID GetStartRoomID();
    
private:
    UFUNCTION(BlueprintCallable)
    FG01BgmRequest GetBgmID();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeRoom(FRoomID InRoomId, bool InForceNotify);
    

    // Fix for true pure virtual functions not being implemented
};

