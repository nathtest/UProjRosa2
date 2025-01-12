#pragma once
#include "CoreMinimal.h"
#include "EG01PartyAchievementType.h"
#include "G01CharaClassID.h"
#include "G01CharacterID.h"
#include "G01FormationIDStruct.h"
#include "G01PartyCharaStatus.h"
#include "G01PartySaveInfo.h"
#include "G01SaveDataUserSubsystemBase.h"
#include "G01PartyInfoGISubsystem.generated.h"

class UG01PartySubsystemHelper;

UCLASS(Blueprintable)
class RS2RE_API UG01PartyInfoGISubsystem : public UG01SaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01PartySaveInfo MPartySaveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01PartySubsystemHelper* HelperObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EG01PartyAchievementType> ReserveUpdateAchievementList;
    
public:
    UG01PartyInfoGISubsystem();

    UFUNCTION(BlueprintCallable)
    UG01PartySubsystemHelper* GetHelperObject();
    
    UFUNCTION(BlueprintCallable)
    TArray<FG01CharacterID> GetAllPartyCharaID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FG01PartyCharaStatus> GetAllParthCharaInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAchievementFormationList(TArray<FG01FormationIDStruct>& OutFormationList);
    
    UFUNCTION(BlueprintCallable)
    void GetAchievementClassList(TArray<FG01CharaClassID>& OutClassList);
    
    UFUNCTION(BlueprintCallable)
    void ClearPartyInfo();
    
};

