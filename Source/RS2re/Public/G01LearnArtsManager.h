#pragma once
#include "CoreMinimal.h"
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "FlagSystemObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemObserverInf -FallbackName=FlagSystemObserverInf
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01LearnArtsAchievementInfo.h"
#include "G01LearnArtsManagerInf.h"
#include "G01LearnArtsManagerObserverInf.h"
#include "G01PartyLearnArtsStruct.h"
#include "G01LearnArtsManager.generated.h"

class UG01BattleArtsDataAsset;

UCLASS(Blueprintable)
class RS2RE_API AG01LearnArtsManager : public AManagerBase, public IG01LearnArtsManagerObserverInf, public IG01LearnArtsManagerInf, public IFlagSystemObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleArtsDataAsset* ArtsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> LearnFathomList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> LearnSkillList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> LearnSpellList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> RegisterFathomList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> RegisterSkillList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> RegisterSpellList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01LearnArtsAchievementInfo AchievementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct MForceArtsRegistFlagID;
    
public:
    AG01LearnArtsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateRegisterLearnArts();
    
    UFUNCTION(BlueprintCallable)
    void TryCountAchievement(FName InArtsID, bool InCallNotify);
    
    UFUNCTION(BlueprintCallable)
    void AddLearnArts(const FG01PartyLearnArtsStruct& InLearnArts);
    

    // Fix for true pure virtual functions not being implemented
};

