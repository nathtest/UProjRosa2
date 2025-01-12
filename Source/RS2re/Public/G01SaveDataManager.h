#pragma once
#include "CoreMinimal.h"
#include "SaveDataManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataManager -FallbackName=SaveDataManager
#include "G01SaveDataManagerInf.h"
#include "G01SaveDataManager.generated.h"

class UG01FieldPlayerManagerAccessor;
class UG01LevelMoveManagerAccessor;
class UG01SequenceManagerAccessor;
class UScreenTransitionManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01SaveDataManager : public ASaveDataManager, public IG01SaveDataManagerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01SequenceManagerAccessor* SequenceManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScreenTransitionManagerAccessor* ScreenTransitionManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01FieldPlayerManagerAccessor* PlayerManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01LevelMoveManagerAccessor* LevelMoveManagerAccessor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRequestRestoreLevelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AutoSaveDelayTime;
    
public:
    AG01SaveDataManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

