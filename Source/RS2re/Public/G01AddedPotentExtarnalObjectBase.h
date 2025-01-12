#pragma once
#include "CoreMinimal.h"
#include "AppActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppActor -FallbackName=AppActor
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01AddedPotentExtarnalInf.h"
#include "G01BattleCommandManagerObserverInf.h"
#include "G01BattleManagerObserverInf.h"
#include "G01AddedPotentExtarnalObjectBase.generated.h"

class UObject;

UCLASS(Blueprintable)
class RS2RE_API AG01AddedPotentExtarnalObjectBase : public AAppActor, public IG01AddedPotentExtarnalInf, public IG01BattleManagerObserverInf, public IG01BattleCommandManagerObserverInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SourceObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TargetObject;
    
public:
    AG01AddedPotentExtarnalObjectBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RemoveSelf();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnTurnElapsed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnFinalize();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnDuplication();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateCommandTaskBefore();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnActionPrepare();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnActionEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDiscard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTargetObject(UObject*& OutObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSourceObject(UObject*& OutObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetParameter(FName& OutParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKey(FG01AddedPotentBaseKeyStruct& OutKey);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DiscardSelf();
    

    // Fix for true pure virtual functions not being implemented
};

