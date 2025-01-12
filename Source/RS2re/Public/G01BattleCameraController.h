#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EG01BattleCameraPhaseType.h"
#include "G01BattleCameraExclusiveCache.h"
#include "G01BattleCameraInterpParam.h"
#include "G01BattleCameraPhaseCache.h"
#include "G01BattleCameraPhaseDebugInfo.h"
#include "G01BattleSystemController.h"
#include "G01BattleCameraController.generated.h"

class AActor;
class ACameraActorBase;
class ASequenceController;
class UCineCameraComponent;
class UDataTable;
class ULoadControlActorComponent;
class USequencerManagerAccessCompo;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleCameraController : public AG01BattleSystemController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USequencerManagerAccessCompo* MSequencerManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULoadControlActorComponent* MLoadController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TriggerEventNamePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsAllRequestLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01BattleCameraPhaseCache> MPhaseCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01BattleCameraExclusiveCache> ExclusiveCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MPhaseTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MTransitionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SystemTagTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ExclusiveTable;
    
public:
    AG01BattleCameraController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetupPeriodTrigger(ASequenceController* InSequenceController);
    
    UFUNCTION(BlueprintCallable)
    void SetupInterpParamByCamera(UPARAM(Ref) FG01BattleCameraInterpParam& InParam, FTransform InTransform, UCineCameraComponent* InCineCamera);
    
    UFUNCTION(BlueprintCallable)
    void RequestLoadResource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void PhaseHasTag(FName InPhaseName, EG01BattleCameraPhaseType InPhaseType, FName InTag, bool& OutHasTag) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLoadedResidentResource();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetInterpInfo(FName& OutPhaseFrom, FName& OutPhaseTo, float& OutDuration, float& OutTimer);
    
    UFUNCTION(BlueprintCallable)
    void GetFilteredPhaseIdList(TArray<FName>& OutList);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCameraPhaseDebugInfo(FG01BattleCameraPhaseDebugInfo& OutInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetActiveExclusiveIdList(TArray<FName>& OutList);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FindTransitionData(FName InFromPhaseName, FName InToPhaseName, bool& ReIsFound, FName& ReTransitionName);
    
    UFUNCTION(BlueprintCallable)
    void FindNextPhaseName(EG01BattleCameraPhaseType InPhaseType, AActor* InOriginActor, bool& ReIsFound, FName& RePhaseName);
    
    UFUNCTION(BlueprintCallable)
    void DataDelete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void CurrentPhaseHasTag(FName InTag, bool& OutHasTag) const;
    
    UFUNCTION(BlueprintCallable)
    void CollectResidentResource(TArray<TSoftClassPtr<UObject>>& OutList);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearPeriodTrigger(ASequenceController* InSequenceController);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCameraInterpParam(ACameraActorBase* InCameraActor, UCineCameraComponent* InCineCamera, const FG01BattleCameraInterpParam& InFrom, const FG01BattleCameraInterpParam& InTo, float InAlpha);
    
};

