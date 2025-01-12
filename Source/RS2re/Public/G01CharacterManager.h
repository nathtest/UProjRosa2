#pragma once
#include "CoreMinimal.h"
#include "LevelObjectFindInterface.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelObjectFindInterface -FallbackName=LevelObjectFindInterface
#include "ObjectCharacterManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ObjectCharacterManagerBase -FallbackName=ObjectCharacterManagerBase
#include "G01CharacterManagerInterface.h"
#include "G01CharacterManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API AG01CharacterManager : public AObjectCharacterManagerBase, public IG01CharacterManagerInterface, public ILevelObjectFindInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MPartyCharactorMinimalInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MEnemyCharactorMinimalInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PartyCharacterVisualInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnemyCharacterVisualInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterVariationInfoTable;
    
public:
    AG01CharacterManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

