#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "LevelTransitionInfoView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelTransitionInfoView -FallbackName=LevelTransitionInfoView
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01BgmRequest.h"
#include "G01FieldPlayerCameraIDStruct.h"
#include "G01RoomLinkedCheckResult.h"
#include "G01RoomParamTableRow.h"
#include "G01RoomManagerInterface.generated.h"

class AActor;
class UAppUserWidget;
class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01RoomManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01RoomManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01RoomManager_SetEnableLevelStreamingRequest(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01RoomManager_RequestLevelStreamingByRoomIDList(const UObject* InRequester, const TArray<FRoomID>& InRoomIDList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01RoomManager_RequestLevelStreaming(const UObject* InRequester);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01RoomManager_IsUseMapMaskByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01RoomManager_IsUseMapMask();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01RoomManager_GetVisitFlagByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01RoomManager_GetVisitFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName Inf_G01RoomManager_GetRoomNameTextIDByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName Inf_G01RoomManager_GetRoomNameTextID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01RoomManager_GetRoomIDByBattleFieldID(const FName& InBattleFieldId, bool& OK, TArray<FRoomID>& OutRoomIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRoomID Inf_G01RoomManager_GetRoomID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FLevelTransitionInfoView> Inf_G01RoomManager_GetQuestIgnoreLevelTransitionIDListByRoomID(FRoomID InRoomId, FName InQuestKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FLevelTransitionInfoView> Inf_G01RoomManager_GetQuestIgnoreLevelTransitionIDList(FName InQuestKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRoomID Inf_G01RoomManager_GetPreRoomID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01FieldPlayerCameraIDStruct Inf_G01RoomManager_GetPlayerCameraIDByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01FieldPlayerCameraIDStruct Inf_G01RoomManager_GetPlayerCameraID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftClassPtr<UAppUserWidget> Inf_G01RoomManager_GetMapImageWidgetByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftClassPtr<UAppUserWidget> Inf_G01RoomManager_GetMapImageWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> Inf_G01RoomManager_GetMainSubLevelNameListByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> Inf_G01RoomManager_GetMainSubLevelNameList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRoomID Inf_G01RoomManager_GetMainRoomIDByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRoomID Inf_G01RoomManager_GetMainRoomID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName Inf_G01RoomManager_GetEnvironmentSettingTypeByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName Inf_G01RoomManager_GetEnvironmentSettingType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FRoomID> Inf_G01RoomManager_GetDestinationSearchRoomIDListByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FRoomID> Inf_G01RoomManager_GetDestinationSearchRoomIDList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01RoomManager_GetDestDispMapCollisions(TArray<AActor*>& OutActors, TArray<FRoomID>& OutRoomIdList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01BgmRequest Inf_G01RoomManager_GetBgmIdByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01BgmRequest Inf_G01RoomManager_GetBgmID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName Inf_G01RoomManager_GetBattleFieldIDByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName Inf_G01RoomManager_GetBattleFieldID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> Inf_G01RoomManager_GetAdjoinSubLevelNameListByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> Inf_G01RoomManager_GetAdjoinSubLevelNameList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FRoomID> Inf_G01RoomManager_GetAdjoinRoomIDListByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FRoomID> Inf_G01RoomManager_GetAdjoinRoomIDList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01RoomManager_FindRoomMap(const FRoomID& InRoomId, bool& OutIsFound, FName& OutMapID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01RoomManager_FindRoomInfo(FRoomID InRoomId, bool& OutIsFound, FG01RoomParamTableRow& OutParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01RoomManager_CheckRoomLinked(bool InIsIgnoreCurrent, FRoomID InStartRoomID, FRoomID InGoalRoomID, bool& OutIsLinked, FG01RoomLinkedCheckResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01RoomManager_CheckLoadedMainSubLevelByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01RoomManager_CheckLoadedMainSubLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01RoomManager_CheckAdjoinRoom(FRoomID InRoomId, bool& OutIsAdjoin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01RoomManager_ChangeRoom(FRoomID InRoomId, bool InForceNotify);
    
};

