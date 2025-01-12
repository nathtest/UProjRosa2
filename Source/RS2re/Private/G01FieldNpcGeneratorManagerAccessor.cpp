#include "G01FieldNpcGeneratorManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01FieldNpcGeneratorManagerAccessor::UG01FieldNpcGeneratorManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_NPC_GEN;
}

void UG01FieldNpcGeneratorManagerAccessor::StopReaction(FEditableLevelObjectID InLevelObjectID, AActor* InActor) {
}

void UG01FieldNpcGeneratorManagerAccessor::SetTalkReaction(FEditableLevelObjectID InLevelObjectID, AActor* InActor, FG01NpcReactionAnimIDStruct InNpcReactionAnimID) {
}

void UG01FieldNpcGeneratorManagerAccessor::SetAIStateAllNpc(EAIState InAiState) {
}

void UG01FieldNpcGeneratorManagerAccessor::RegenerateFriendNpcDirect() {
}

void UG01FieldNpcGeneratorManagerAccessor::RegenerateFriendNpc() {
}

void UG01FieldNpcGeneratorManagerAccessor::PlayReaction(FEditableLevelObjectID InLevelObjectID, AActor* InActor, FG01NpcReactionAnimIDStruct InNpcReactionAnimID, FName InSectionName, const UObject* InRequester) {
}

FG01NpcReactionAnimIDStruct UG01FieldNpcGeneratorManagerAccessor::GetTalkReaction(FEditableLevelObjectID InLevelObjectID, AActor* InActor) {
    return FG01NpcReactionAnimIDStruct{};
}

TArray<AG01FieldNpcBase*> UG01FieldNpcGeneratorManagerAccessor::GetNpcListByRoomID(FRoomID InRoomId) {
    return TArray<AG01FieldNpcBase*>();
}

TArray<AG01FieldNpcBase*> UG01FieldNpcGeneratorManagerAccessor::GetNpcList() {
    return TArray<AG01FieldNpcBase*>();
}

TArray<AG01FieldNpcGeneratorBase*> UG01FieldNpcGeneratorManagerAccessor::GetNpcGeneratorListByRoomID(FRoomID InRoomId) {
    return TArray<AG01FieldNpcGeneratorBase*>();
}

TArray<AG01FieldNpcGeneratorBase*> UG01FieldNpcGeneratorManagerAccessor::GetNpcGeneratorList() {
    return TArray<AG01FieldNpcGeneratorBase*>();
}

int32 UG01FieldNpcGeneratorManagerAccessor::GetEnableTickCount() const {
    return 0;
}

FG01FriendNpcParamTableRow UG01FieldNpcGeneratorManagerAccessor::FindFriendNpcInfo(const FG01CharacterID& InCharaID) {
    return FG01FriendNpcParamTableRow{};
}


