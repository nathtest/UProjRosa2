#pragma once
#include "CoreMinimal.h"
#include "LevelMoveObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelMoveObserverInf -FallbackName=LevelMoveObserverInf
#include "SaveDataSubsystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataSubsystem -FallbackName=SaveDataSubsystem
#include "ScreenTransitionManagerObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ScreenTransitionManagerObserverInf -FallbackName=ScreenTransitionManagerObserverInf
#include "G01OptionMenuUiControllerObserverInf.h"
#include "G01RoomManagerObserverInf.h"
#include "G01SaveDataExecuteReserve_Load.h"
#include "G01SaveLog.h"
#include "G01SaveDataSubsystem.generated.h"

class UG01SaveDataSubsystemFeatureBase;

UCLASS(Blueprintable)
class RS2RE_API UG01SaveDataSubsystem : public USaveDataSubsystem, public ILevelMoveObserverInf, public IScreenTransitionManagerObserverInf, public IG01RoomManagerObserverInf, public IG01OptionMenuUiControllerObserverInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UG01SaveDataSubsystemFeatureBase*> Features;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01SaveLog SaveLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01SaveDataExecuteReserve_Load LoadReserve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRequestRestoreLevelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEnableTeleportAutoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsWaitAutoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsForceAutoSave;
    
public:
    UG01SaveDataSubsystem();


    // Fix for true pure virtual functions not being implemented
};

