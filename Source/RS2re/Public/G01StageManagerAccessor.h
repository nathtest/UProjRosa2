#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01MapMaskParam.h"
#include "G01RegionIDStruct.h"
#include "G01StageIDStruct.h"
#include "G01StageManagerAccessor.generated.h"

class UDataTable;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01StageManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01StageManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveMaskData(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    FText GetStageNameTextByMapName(FName InMapName);
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetRoomParamTableByMapName(FName InMapName);
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetRoomParamTable();
    
    UFUNCTION(BlueprintCallable)
    FName GetRegionNameTextIDByMapName(FName InMapName);
    
    UFUNCTION(BlueprintCallable)
    FName GetRegionNameTextID();
    
    UFUNCTION(BlueprintCallable)
    FText GetRegionNameTextByRegionID(FG01RegionIDStruct InRegionID);
    
    UFUNCTION(BlueprintCallable)
    FText GetRegionNameTextByMapName(FName InMapName);
    
    UFUNCTION(BlueprintCallable)
    FText GetRegionNameText();
    
    UFUNCTION(BlueprintCallable)
    FG01RegionIDStruct GetRegionIDByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    FG01RegionIDStruct GetRegionIDByMapName(FName InMapName);
    
    UFUNCTION(BlueprintCallable)
    FG01RegionIDStruct GetRegionID();
    
    UFUNCTION(BlueprintCallable)
    FName GetMapNameByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMapName() const;
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetFastTravelParamTableByMapName(FName InMapName);
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetFastTravelParamTable();
    
    UFUNCTION(BlueprintCallable)
    void FindMaskData(FRoomID InRoomId, FG01MapMaskParam& OutMaskData, bool& OutIsValid);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector2D> FindMapMaskTexture(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* CreateMapMaskTexture(FRoomID InRoomId, bool InIsUseMaskSetting, int32 InSIzeX, int32 InSizeY);
    
    UFUNCTION(BlueprintCallable)
    bool CheckVisitRoom(FName InMapName, FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckCurrentStage(const FG01StageIDStruct InStageID, bool& OutIsCurrentStage) const;
    
    UFUNCTION(BlueprintCallable)
    void AddVisitRoomID(FName InMapName, FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    void AddMaskData(FRoomID InRoomId, FG01MapMaskParam InMaskData);
    
};

