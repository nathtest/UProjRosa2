#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01SeqActorCollectResultOpaque.h"
#include "G01SeqActorCollectResultTranslucent.h"
#include "G01BattleCharacterViewSwitcher.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattleCharacterViewSwitcher : public UActorComponent {
    GENERATED_BODY()
public:
    UG01BattleCharacterViewSwitcher(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateViewStatus(UObject* InDelegateObject);
    
    UFUNCTION(BlueprintCallable)
    void MakeTransResult(const TArray<AActor*> InOverlapActors, float InTransparency, FG01SeqActorCollectResultTranslucent& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void MakeOpaqueResult(const TArray<AActor*> InOverlapActors, FG01SeqActorCollectResultOpaque& OutResult);
    
};

