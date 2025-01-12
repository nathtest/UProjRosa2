#pragma once
#include "CoreMinimal.h"
#include "LevelObjectFindInterface.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelObjectFindInterface -FallbackName=LevelObjectFindInterface
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "SequenceManagerObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceManagerObserverInf -FallbackName=SequenceManagerObserverInf
#include "G01CharacterID.h"
#include "G01HistoryManagerInterface.h"
#include "G01HistoryManager.generated.h"

class UG01CharacterManagerAccessor;
class UG01HistoryManagerSettings;
class UG01PartyManagerAccessor;
class UG01PeriodManagerAccessor;
class UObserverSubjectComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01HistoryManager : public AManagerBase, public IG01HistoryManagerInterface, public ISequenceManagerObserverInf, public ILevelObjectFindInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01HistoryManagerSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01CharacterID> IgnorePastEmperorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UObserverSubjectComponent* ObserverSubject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01PeriodManagerAccessor* PeriodManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01CharacterManagerAccessor* CharacterManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01PartyManagerAccessor* PartyManagerAccessor;
    
public:
    AG01HistoryManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

