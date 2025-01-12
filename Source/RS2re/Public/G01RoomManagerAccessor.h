#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01BgmRequest.h"
#include "G01FieldPlayerCameraIDStruct.h"
#include "G01RoomManagerAccessor.generated.h"

class AG01RoomManager;
class UAppUserWidget;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01RoomManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01RoomManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnableLevelStreamingRequest(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void RequestLevelStreamingByRoomIDList(const UObject* InRequester, const TArray<FRoomID>& InRoomIDList);
    
    UFUNCTION(BlueprintCallable)
    void RequestLevelStreaming(const UObject* InRequester);
    
    UFUNCTION(BlueprintCallable)
    bool IsUseMapMaskByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    bool IsUseMapMask();
    
    UFUNCTION(BlueprintCallable)
    bool GetVisitFlagByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    bool GetVisitFlag();
    
    UFUNCTION(BlueprintCallable)
    FName GetRoomNameTextIDByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    FName GetRoomNameTextID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AG01RoomManager* GetRoomManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRoomIDByBattleFieldID(const FName& InBattleFieldId, bool& OK, TArray<FRoomID>& OutRoomIDs) const;
    
    UFUNCTION(BlueprintCallable)
    FRoomID GetRoomID();
    
    UFUNCTION(BlueprintCallable)
    FRoomID GetPreRoomID();
    
    UFUNCTION(BlueprintCallable)
    FG01FieldPlayerCameraIDStruct GetPlayerCameraIDByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    FG01FieldPlayerCameraIDStruct GetPlayerCameraID();
    
    UFUNCTION(BlueprintCallable)
    TSoftClassPtr<UAppUserWidget> GetMapImageWidgetByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    TSoftClassPtr<UAppUserWidget> GetMapImageWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetMainSubLevelNameListByRoomID(FRoomID InRoomId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetMainSubLevelNameList() const;
    
    UFUNCTION(BlueprintCallable)
    FRoomID GetMainRoomIDByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    FRoomID GetMainRoomID();
    
    UFUNCTION(BlueprintCallable)
    FName GetEnvironmentSettingTypeByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    FName GetEnvironmentSettingType();
    
    UFUNCTION(BlueprintCallable)
    FG01BgmRequest GetBgmIdByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    FG01BgmRequest GetBgmID();
    
    UFUNCTION(BlueprintCallable)
    FName GetBattleFieldIDByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    FName GetBattleFieldId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAdjoinSubLevelNameListByRoomID(FRoomID InRoomId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAdjoinSubLevelNameList() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FRoomID> GetAdjoinRoomIDListByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRoomID> GetAdjoinRoomIDList();
    
    UFUNCTION(BlueprintCallable)
    bool CheckLoadedMainSubLevelByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    bool CheckLoadedMainSubLevel();
    
    UFUNCTION(BlueprintCallable)
    void CheckAdjoinRoom(FRoomID InRoomId, bool& OutIsAdjoin);
    
    UFUNCTION(BlueprintCallable)
    void ChangeRoom(FRoomID InRoomId, bool InForceNotify);
    
};

