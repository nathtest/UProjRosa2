#pragma once
#include "CoreMinimal.h"
#include "EG01FriendClass.h"
#include "EG01FriendNpcCreateConditions.h"
#include "G01CharacterID.h"
#include "G01FieldNpcGeneratorBase.h"
#include "G01FieldFriendNpcGeneratorBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01FieldFriendNpcGeneratorBase : public AG01FieldNpcGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01FriendNpcCreateConditions MCreateConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01FriendClass MFriendClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EG01FriendClass> MNoJoinPartyClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GenerationNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterID CharacterID;
    
public:
    AG01FieldFriendNpcGeneratorBase(const FObjectInitializer& ObjectInitializer);

};

