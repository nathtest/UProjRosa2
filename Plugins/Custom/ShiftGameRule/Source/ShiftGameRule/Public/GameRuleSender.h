#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "GameRuleSender.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHIFTGAMERULE_API UGameRuleSender : public UActorComponent {
    GENERATED_BODY()
public:
    UGameRuleSender(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Request(const FName& requestGameRule, bool isRemove);
    
};

