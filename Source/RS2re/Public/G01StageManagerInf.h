#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "EG01PlayerType.h"
#include "G01MapMaskParam.h"
#include "G01RegionIDStruct.h"
#include "G01StageIDStruct.h"
#include "G01StagePhysicalMaterialIDStruct.h"
#include "G01StageManagerInf.generated.h"

class UDataTable;
class UPhysicalMaterial;
class UTextureRenderTarget2D;
class UWorld;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01StageManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01StageManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StageManager_RemoveMaskData(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText Inf_G01StageManager_GetStageNameTextByMapName(FName InMapName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDataTable* Inf_G01StageManager_GetRoomParamTableByMapName(FName InMapName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDataTable* Inf_G01StageManager_GetRoomParamTable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName Inf_G01StageManager_GetRegionNameTextIDByMapName(FName InMapName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName Inf_G01StageManager_GetRegionNameTextID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText Inf_G01StageManager_GetRegionNameTextByRegionID(FG01RegionIDStruct InRegionID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText Inf_G01StageManager_GetRegionNameTextByMapName(FName InMapName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText Inf_G01StageManager_GetRegionNameText();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01RegionIDStruct Inf_G01StageManager_GetRegionIDByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01RegionIDStruct Inf_G01StageManager_GetRegionIDByMapName(FName InMapName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01RegionIDStruct Inf_G01StageManager_GetRegionID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StageManager_GetPlayerType(EG01PlayerType& OutPlayerType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01StagePhysicalMaterialIDStruct Inf_G01StageManager_GetPhysicalMaterialID(const UPhysicalMaterial* InPhysicalMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPhysicalMaterial* Inf_G01StageManager_GetPhysicalMaterial(const FG01StagePhysicalMaterialIDStruct& InPhysicalMaterialID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDataTable* Inf_G01StageManager_GetMapParamTable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName Inf_G01StageManager_GetMapNameByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName Inf_G01StageManager_GetMapName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName Inf_G01StageManager_GetLevelName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDataTable* Inf_G01StageManager_GetFastTravelParamTableByMapName(FName InMapName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDataTable* Inf_G01StageManager_GetFastTravelParamTable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StageManager_FindMaskData(FRoomID InRoomId, FG01MapMaskParam& OutMaskData, bool& OutIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FVector2D> Inf_G01StageManager_FindMapMaskParam(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UTextureRenderTarget2D* Inf_G01StageManager_CreateMapMaskTexture(FRoomID InRoomId, bool InIsUseMaskSetting, int32 InSIzeX, int32 InSizeY);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName Inf_G01StageManager_ConvLevelToMapID(const TSoftObjectPtr<UWorld>& InLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01StageManager_CheckVisitRoom(FName InMapName, FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StageManager_CheckCurrentStage(const FG01StageIDStruct& InStageID, bool& OutIsCurrentStage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StageManager_AddVisitRoomID(FName InMapName, FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StageManager_AddMaskData(FRoomID InRoomId, FG01MapMaskParam InMaskData);
    
};

