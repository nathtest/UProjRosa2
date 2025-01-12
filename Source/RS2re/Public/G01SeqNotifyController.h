#pragma once
#include "CoreMinimal.h"
#include "EffectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EffectID -FallbackName=EffectID
#include "EventResult.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EventResult -FallbackName=EventResult
#include "SeqNotifyController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SeqNotifyController -FallbackName=SeqNotifyController
#include "VFXID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXID -FallbackName=VFXID
#include "G01BattleManagerObserverInf.h"
#include "G01SeqFxHandles.h"
#include "G01SeqNotifyBattleDamageParam.h"
#include "G01SeqNotifyBgmParam.h"
#include "G01SeqVFXHandles.h"
#include "EventManagerAccessComponent.h"
#include "G01SeqNotifyController.generated.h"

class AEventObjectBase;
class ASeqActorAnimControllerBinder;
class ASeqNotifyControllerBinder;
class UEventManagerAccessComponent;
class UG01BgmManagerAccessor;
class UG01FXHandle;
class UG01SequenceManagerAccessor;
class UG01VFXHandle;

UCLASS(Blueprintable)
class RS2RE_API AG01SeqNotifyController : public ASeqNotifyController, public IG01BattleManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01SequenceManagerAccessor* SequenceManagerAccessor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FEffectID, FG01SeqFxHandles> MEffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MEndEffectCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FVFXID, FG01SeqVFXHandles> MVFXHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MEndVFXCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MHitCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEventManagerAccessComponent* EventManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AEventObjectBase*> Events;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentBgmPlaybackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentBgmPlayingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01BgmManagerAccessor* BgmManagerAccessor;
    
public:
    AG01SeqNotifyController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedVFX(UG01VFXHandle* InHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedEffect(UG01FXHandle* InHandle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndPlayBgm(const FG01SeqNotifyBgmParam& InParam, bool InForceFadeOut);
    
    UFUNCTION(BlueprintCallable)
    void OnEndEvent(const FEventResult& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnBeginPlayBgm(const FG01SeqNotifyBgmParam& InParam);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyFathom(const ASeqNotifyControllerBinder* InBinder, ASeqActorAnimControllerBinder* InAttacker, const FG01SeqNotifyBattleDamageParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyDamage(const ASeqNotifyControllerBinder* InBinder, ASeqActorAnimControllerBinder* InAttacker, const FG01SeqNotifyBattleDamageParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyActionCommand(ASeqActorAnimControllerBinder* InAttacker, FName InActionCommand);
    

    // Fix for true pure virtual functions not being implemented
};

