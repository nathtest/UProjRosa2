#include "G01StageManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01StageManagerAccessor::UG01StageManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_STAGE;
}

void UG01StageManagerAccessor::RemoveMaskData(FRoomID InRoomId) {
}

FText UG01StageManagerAccessor::GetStageNameTextByMapName(FName InMapName) {
    return FText::GetEmpty();
}

UDataTable* UG01StageManagerAccessor::GetRoomParamTableByMapName(FName InMapName) {
    return NULL;
}

UDataTable* UG01StageManagerAccessor::GetRoomParamTable() {
    return NULL;
}

FName UG01StageManagerAccessor::GetRegionNameTextIDByMapName(FName InMapName) {
    return NAME_None;
}

FName UG01StageManagerAccessor::GetRegionNameTextID() {
    return NAME_None;
}

FText UG01StageManagerAccessor::GetRegionNameTextByRegionID(FG01RegionIDStruct InRegionID) {
    return FText::GetEmpty();
}

FText UG01StageManagerAccessor::GetRegionNameTextByMapName(FName InMapName) {
    return FText::GetEmpty();
}

FText UG01StageManagerAccessor::GetRegionNameText() {
    return FText::GetEmpty();
}

FG01RegionIDStruct UG01StageManagerAccessor::GetRegionIDByRoomID(FRoomID InRoomId) {
    return FG01RegionIDStruct{};
}

FG01RegionIDStruct UG01StageManagerAccessor::GetRegionIDByMapName(FName InMapName) {
    return FG01RegionIDStruct{};
}

FG01RegionIDStruct UG01StageManagerAccessor::GetRegionID() {
    return FG01RegionIDStruct{};
}

FName UG01StageManagerAccessor::GetMapNameByRoomID(FRoomID InRoomId) {
    return NAME_None;
}

FName UG01StageManagerAccessor::GetMapName() const {
    return NAME_None;
}

UDataTable* UG01StageManagerAccessor::GetFastTravelParamTableByMapName(FName InMapName) {
    return NULL;
}

UDataTable* UG01StageManagerAccessor::GetFastTravelParamTable() {
    return NULL;
}

void UG01StageManagerAccessor::FindMaskData(FRoomID InRoomId, FG01MapMaskParam& OutMaskData, bool& OutIsValid) {
}

TArray<FVector2D> UG01StageManagerAccessor::FindMapMaskTexture(FRoomID InRoomId) {
    return TArray<FVector2D>();
}

UTextureRenderTarget2D* UG01StageManagerAccessor::CreateMapMaskTexture(FRoomID InRoomId, bool InIsUseMaskSetting, int32 InSIzeX, int32 InSizeY) {
    return NULL;
}

bool UG01StageManagerAccessor::CheckVisitRoom(FName InMapName, FRoomID InRoomId) {
    return false;
}

void UG01StageManagerAccessor::CheckCurrentStage(const FG01StageIDStruct InStageID, bool& OutIsCurrentStage) const {
}

void UG01StageManagerAccessor::AddVisitRoomID(FName InMapName, FRoomID InRoomId) {
}

void UG01StageManagerAccessor::AddMaskData(FRoomID InRoomId, FG01MapMaskParam InMaskData) {
}


