#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSubsystemHelper.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GameInstanceSubsystemHelper -FallbackName=GameInstanceSubsystemHelper
#include "EG01FriendClass.h"
#include "G01CharacterID.h"
#include "G01FormationIDStruct.h"
#include "G01PartyFormationData.h"
#include "G01PartySubsystemHelper.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01PartySubsystemHelper : public UGameInstanceSubsystemHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterID PlayerCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01CharacterID> PartyMemberCharacterIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MasterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EG01FriendClass> ReleaseFriendClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EG01FriendClass> ReleasePlayableClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01FormationIDStruct> UsableFormationIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01PartyFormationData MainFormation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01PartyFormationData SubFormation;
    
    UG01PartySubsystemHelper();

    UFUNCTION(BlueprintCallable)
    void SetPartyCharacters(const TArray<FG01CharacterID>& InIdList, int32 InPlayerIndex);
    
};

