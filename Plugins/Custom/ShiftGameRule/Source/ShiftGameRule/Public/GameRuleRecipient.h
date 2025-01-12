#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "GameRuleRecipientInterface.h"
#include "OnShiftGameRuleDelegate.h"
#include "GameRuleRecipient.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHIFTGAMERULE_API UGameRuleRecipient : public UActorComponent, public IGameRuleRecipientInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShiftGameRule DelegateOnShiftGameRule_;
    
    UGameRuleRecipient(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

