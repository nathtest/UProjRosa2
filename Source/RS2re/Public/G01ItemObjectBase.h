#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "G01ItemObjectInf.h"
#include "ItemVACreatedDispatcherDelegate.h"
#include "G01ItemObjectBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01ItemObjectBase : public AActor, public IG01ItemObjectInf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemVACreatedDispatcher EventVACreatedDispatcher;
    
    AG01ItemObjectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Visible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDitherRate(bool InIsEnable, float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Invisible();
    

    // Fix for true pure virtual functions not being implemented
};

