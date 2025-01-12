#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EAIState.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAIState -FallbackName=EAIState
#include "EditableLevelObjectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EditableLevelObjectID -FallbackName=EditableLevelObjectID
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01CharacterID.h"
#include "G01FriendNpcParamTableRow.h"
#include "G01NpcReactionAnimIDStruct.h"
#include "G01FieldNpcGeneratorManagerInterface.generated.h"

class AActor;
class AG01FieldNpcBase;
class AG01FieldNpcGeneratorBase;
class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FieldNpcGeneratorManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01FieldNpcGeneratorManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldNpcGeneratorManagerInterface_StopReaction(FEditableLevelObjectID InLevelObjectID, AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldNpcGeneratorManagerInterface_SetTalkReaction(FEditableLevelObjectID InLevelObjectID, AActor* InActor, FG01NpcReactionAnimIDStruct InNpcReactionAnimID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldNpcGeneratorManagerInterface_SetAIStateAllNpc(EAIState InAiState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldNpcGeneratorManagerInterface_RegenerateFriendNpcDirect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldNpcGeneratorManagerInterface_PlayReaction(FEditableLevelObjectID InLevelObjectID, AActor* InActor, FG01NpcReactionAnimIDStruct InNpcReactionAnimID, FName InSectionName, const UObject* InRequester);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01NpcReactionAnimIDStruct Inf_G01FieldNpcGeneratorManagerInterface_GetTalkReaction(FEditableLevelObjectID InLevelObjectID, AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AG01FieldNpcBase*> Inf_G01FieldNpcGeneratorManagerInterface_GetNpcListByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AG01FieldNpcBase*> Inf_G01FieldNpcGeneratorManagerInterface_GetNpcList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AG01FieldNpcGeneratorBase*> Inf_G01FieldNpcGeneratorManagerInterface_GetNpcGeneratorListByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AG01FieldNpcGeneratorBase*> Inf_G01FieldNpcGeneratorManagerInterface_GetNpcGeneratorList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01FieldNpcGeneratorManagerInterface_GetEnableTickCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01FriendNpcParamTableRow Inf_G01FieldNpcGeneratorManagerInterface_FindFriendNpcInfo(const FG01CharacterID& InCharaID);
    
};

