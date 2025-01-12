#pragma once
#include "CoreMinimal.h"
#include "GameRuleRecipient.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ShiftGameRule -ObjectName=GameRuleRecipient -FallbackName=GameRuleRecipient
#include "OnG01ShiftGameRuleDelegate.h"
#include "G01GameRuleRecipient.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01GameRuleRecipient : public UGameRuleRecipient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnG01ShiftGameRule DelegateOnG01ShiftGameRule_;
    
    UG01GameRuleRecipient(const FObjectInitializer& ObjectInitializer);

};

