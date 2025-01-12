#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "FlagChangedEventReserveParam.h"
#include "OnReceiveFlagChangedDelegate.h"
#include "FlagEventReceiveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UFlagEventReceiveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceiveFlagChanged MOnFlagChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsForceBroadcast_OnFlagChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFlagChangedEventReserveParam> MFlagChangedConditionList;
    
public:
    UFlagEventReceiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveEventFlagChanged(FFlagChangedEventReserveParam InParam);
    
    UFUNCTION(BlueprintCallable)
    void AddEventFlagChanged(FFlagChangedEventReserveParam InParam);
    
};

