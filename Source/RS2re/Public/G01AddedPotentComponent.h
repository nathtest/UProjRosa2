#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EG01AddedPotentCureTimingEnum.h"
#include "EG01AddedPotentEnhanceTypeEnum.h"
#include "EG01AddedPotentUsageEnum.h"
#include "G01AddedPotentAilmentInf.h"
#include "G01AddedPotentAilmentStruct.h"
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01AddedPotentCategoryKeyStruct.h"
#include "G01AddedPotentEnhanceStruct.h"
#include "G01AddedPotentExtarnalInf.h"
#include "G01BattleCharacterStatusStruct.h"
#include "G01BattleManagerObserverInf.h"
#include "G01AddedPotentComponent.generated.h"

class AActor;
class AG01AddedPotentExtarnalObjectBase;
class UDataTable;
class UG01AddedPotentExtarnalHelper;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01AddedPotentComponent : public UActorComponent, public IG01AddedPotentAilmentInf, public IG01AddedPotentExtarnalInf, public IG01BattleManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AddedPotentDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AilmentDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ExtarnalDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01AddedPotentExtarnalHelper* ExtarnalHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> linkMembers_;
    
public:
    UG01AddedPotentComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFxHiddenFlag(FName InFlagLabel, bool InIsHidden);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEnhance(FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCategory(FG01AddedPotentCategoryKeyStruct InCategory);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBySource(AActor* InSource, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllExtarnal();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllEnhance();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllAilment();
    
    UFUNCTION(BlueprintCallable)
    void Remove(FG01AddedPotentBaseKeyStruct InPotant);
    
    UFUNCTION(BlueprintCallable)
    void OnTurnElapsed();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginResult();
    
    UFUNCTION(BlueprintCallable)
    void OnActionPrepare();
    
    UFUNCTION(BlueprintCallable)
    void OnActionEnded();
    
    UFUNCTION(BlueprintCallable)
    void NotifyActivateAbility(const FName& InAbilityId);
    
    UFUNCTION(BlueprintCallable)
    void InvalidAilment(AActor* InSource, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable)
    void Hit(AActor* InSource, FG01AddedPotentBaseKeyStruct InPotant, FName InParameter, bool& OutIsApply);
    
    UFUNCTION(BlueprintCallable)
    void Has(FG01AddedPotentBaseKeyStruct InPotant, bool& OutHas);
    
    UFUNCTION(BlueprintCallable)
    EG01AddedPotentUsageEnum GetUsage(FG01AddedPotentBaseKeyStruct InPotant);
    
    UFUNCTION(BlueprintCallable)
    int32 GetOtherCorrectionPower(EG01AddedPotentEnhanceTypeEnum InType);
    
    UFUNCTION(BlueprintCallable)
    void GetHasPlusEnhance(TArray<FG01AddedPotentEnhanceStruct>& OutList);
    
    UFUNCTION(BlueprintCallable)
    void GetHasMinusEnhance(TArray<FG01AddedPotentEnhanceStruct>& OutList);
    
    UFUNCTION(BlueprintCallable)
    void GetHasAllExtarnal(TArray<AG01AddedPotentExtarnalObjectBase*>& OutList);
    
    UFUNCTION(BlueprintCallable)
    void GetHasAllEnhance(TArray<FG01AddedPotentEnhanceStruct>& OutList);
    
    UFUNCTION(BlueprintCallable)
    void GetHasAllAilment(TArray<FG01AddedPotentAilmentStruct>& OutList);
    
    UFUNCTION(BlueprintCallable)
    void GetCorrectionStatus(const FG01BattleCharacterStatusStruct& InCurrent, const FG01BattleCharacterStatusStruct& InMax, FG01BattleCharacterStatusStruct& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    FName GetCategory(FG01AddedPotentBaseKeyStruct InPotant);
    
    UFUNCTION(BlueprintCallable)
    void DetachExtarnal(AG01AddedPotentExtarnalObjectBase* InExtarnal);
    
    UFUNCTION(BlueprintCallable)
    void AttachExtarnal(AActor* InSource, AG01AddedPotentExtarnalObjectBase* InExtarnal, FName InParameter, bool& OutIsApply);
    
    UFUNCTION(BlueprintCallable)
    void AddEnhance(FG01AddedPotentBaseKeyStruct InPotent, EG01AddedPotentEnhanceTypeEnum InType, const int32& InValue, int32 InTurnCount, EG01AddedPotentCureTimingEnum InCureTiming, bool IsUnique, bool IsHidden, bool IsNeedNotify);
    

    // Fix for true pure virtual functions not being implemented
};

