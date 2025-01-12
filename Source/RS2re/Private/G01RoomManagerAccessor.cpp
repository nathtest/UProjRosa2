#include "G01RoomManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01RoomManagerAccessor::UG01RoomManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_ROOM;
}

void UG01RoomManagerAccessor::SetEnableLevelStreamingRequest(bool InEnable) {
}

void UG01RoomManagerAccessor::RequestLevelStreamingByRoomIDList(const UObject* InRequester, const TArray<FRoomID>& InRoomIDList) {
}

void UG01RoomManagerAccessor::RequestLevelStreaming(const UObject* InRequester) {
}

bool UG01RoomManagerAccessor::IsUseMapMaskByRoomID(FRoomID InRoomId) {
    return false;
}

bool UG01RoomManagerAccessor::IsUseMapMask() {
    return false;
}

bool UG01RoomManagerAccessor::GetVisitFlagByRoomID(FRoomID InRoomId) {
    return false;
}

bool UG01RoomManagerAccessor::GetVisitFlag() {
    return false;
}

FName UG01RoomManagerAccessor::GetRoomNameTextIDByRoomID(FRoomID InRoomId) {
    return NAME_None;
}

FName UG01RoomManagerAccessor::GetRoomNameTextID() {
    return NAME_None;
}

AG01RoomManager* UG01RoomManagerAccessor::GetRoomManager() const {
    return NULL;
}

void UG01RoomManagerAccessor::GetRoomIDByBattleFieldID(const FName& InBattleFieldId, bool& OK, TArray<FRoomID>& OutRoomIDs) const {
}

FRoomID UG01RoomManagerAccessor::GetRoomID() {
    return FRoomID{};
}

FRoomID UG01RoomManagerAccessor::GetPreRoomID() {
    return FRoomID{};
}

FG01FieldPlayerCameraIDStruct UG01RoomManagerAccessor::GetPlayerCameraIDByRoomID(FRoomID InRoomId) {
    return FG01FieldPlayerCameraIDStruct{};
}

FG01FieldPlayerCameraIDStruct UG01RoomManagerAccessor::GetPlayerCameraID() {
    return FG01FieldPlayerCameraIDStruct{};
}

TSoftClassPtr<UAppUserWidget> UG01RoomManagerAccessor::GetMapImageWidgetByRoomID(FRoomID InRoomId) {
    return NULL;
}

TSoftClassPtr<UAppUserWidget> UG01RoomManagerAccessor::GetMapImageWidget() {
    return NULL;
}

TArray<FName> UG01RoomManagerAccessor::GetMainSubLevelNameListByRoomID(FRoomID InRoomId) const {
    return TArray<FName>();
}

TArray<FName> UG01RoomManagerAccessor::GetMainSubLevelNameList() const {
    return TArray<FName>();
}

FRoomID UG01RoomManagerAccessor::GetMainRoomIDByRoomID(FRoomID InRoomId) {
    return FRoomID{};
}

FRoomID UG01RoomManagerAccessor::GetMainRoomID() {
    return FRoomID{};
}

FName UG01RoomManagerAccessor::GetEnvironmentSettingTypeByRoomID(FRoomID InRoomId) {
    return NAME_None;
}

FName UG01RoomManagerAccessor::GetEnvironmentSettingType() {
    return NAME_None;
}

FG01BgmRequest UG01RoomManagerAccessor::GetBgmIdByRoomID(FRoomID InRoomId) {
    return FG01BgmRequest{};
}

FG01BgmRequest UG01RoomManagerAccessor::GetBgmID() {
    return FG01BgmRequest{};
}

FName UG01RoomManagerAccessor::GetBattleFieldIDByRoomID(FRoomID InRoomId) {
    return NAME_None;
}

FName UG01RoomManagerAccessor::GetBattleFieldId() {
    return NAME_None;
}

TArray<FName> UG01RoomManagerAccessor::GetAdjoinSubLevelNameListByRoomID(FRoomID InRoomId) const {
    return TArray<FName>();
}

TArray<FName> UG01RoomManagerAccessor::GetAdjoinSubLevelNameList() const {
    return TArray<FName>();
}

TArray<FRoomID> UG01RoomManagerAccessor::GetAdjoinRoomIDListByRoomID(FRoomID InRoomId) {
    return TArray<FRoomID>();
}

TArray<FRoomID> UG01RoomManagerAccessor::GetAdjoinRoomIDList() {
    return TArray<FRoomID>();
}

bool UG01RoomManagerAccessor::CheckLoadedMainSubLevelByRoomID(FRoomID InRoomId) {
    return false;
}

bool UG01RoomManagerAccessor::CheckLoadedMainSubLevel() {
    return false;
}

void UG01RoomManagerAccessor::CheckAdjoinRoom(FRoomID InRoomId, bool& OutIsAdjoin) {
}

void UG01RoomManagerAccessor::ChangeRoom(FRoomID InRoomId, bool InForceNotify) {
}


