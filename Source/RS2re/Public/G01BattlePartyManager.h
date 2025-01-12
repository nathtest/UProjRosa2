#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "EBattlePartyCommandListType.h"
#include "G01BattlePartyManagerInf.h"
#include "G01BattlePartyTableRow.h"
#include "G01BattlePartyManager.generated.h"

class UG01BattlePartyDataAsset;

UCLASS(Blueprintable)
class RS2RE_API AG01BattlePartyManager : public AManagerBase, public IG01BattlePartyManagerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattlePartyDataAsset* BattlePartyDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattlePartyCommandListType SortingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNeedOpenAllSkillUnit;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> CharacterIdToBattleCharaId;
    
public:
    AG01BattlePartyManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void FindBattleParty(FName InRowName, bool& OutFound, FG01BattlePartyTableRow& OutRow);
    

    // Fix for true pure virtual functions not being implemented
};

