#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01CharacterID.h"
#include "G01MenuTechArtsFuncLib.generated.h"

class UG01BattleArtsManagerAccessor;
class UG01PartyManagerAccessor;
class UObject;

UCLASS(Blueprintable)
class RS2RE_API UG01MenuTechArtsFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01MenuTechArtsFuncLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void AutoSortArtsByChara(UObject* InWorldContext, const FG01CharacterID& InCharaID, UG01PartyManagerAccessor* InPartyManagerAccessor, UG01BattleArtsManagerAccessor* InBattleArtsManagerAccessor);
    
};

