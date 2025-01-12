#pragma once
#include "CoreMinimal.h"
#include "EAIState.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAIState -FallbackName=EAIState
#include "EditableLevelObjectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EditableLevelObjectID -FallbackName=EditableLevelObjectID
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01CharacterID.h"
#include "G01FriendNpcParamTableRow.h"
#include "G01NpcReactionAnimIDStruct.h"
#include "G01FieldNpcGeneratorManagerAccessor.generated.h"

class AActor;
class AG01FieldNpcBase;
class AG01FieldNpcGeneratorBase;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01FieldNpcGeneratorManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01FieldNpcGeneratorManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopReaction(FEditableLevelObjectID InLevelObjectID, AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void SetTalkReaction(FEditableLevelObjectID InLevelObjectID, AActor* InActor, FG01NpcReactionAnimIDStruct InNpcReactionAnimID);
    
    UFUNCTION(BlueprintCallable)
    void SetAIStateAllNpc(EAIState InAiState);
    
    UFUNCTION(BlueprintCallable)
    void RegenerateFriendNpcDirect();
    
    UFUNCTION(BlueprintCallable)
    void RegenerateFriendNpc();
    
    UFUNCTION(BlueprintCallable)
    void PlayReaction(FEditableLevelObjectID InLevelObjectID, AActor* InActor, FG01NpcReactionAnimIDStruct InNpcReactionAnimID, FName InSectionName, const UObject* InRequester);
    
    UFUNCTION(BlueprintCallable)
    FG01NpcReactionAnimIDStruct GetTalkReaction(FEditableLevelObjectID InLevelObjectID, AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    TArray<AG01FieldNpcBase*> GetNpcListByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    TArray<AG01FieldNpcBase*> GetNpcList();
    
    UFUNCTION(BlueprintCallable)
    TArray<AG01FieldNpcGeneratorBase*> GetNpcGeneratorListByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    TArray<AG01FieldNpcGeneratorBase*> GetNpcGeneratorList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnableTickCount() const;
    
    UFUNCTION(BlueprintCallable)
    FG01FriendNpcParamTableRow FindFriendNpcInfo(const FG01CharacterID& InCharaID);
    
};

