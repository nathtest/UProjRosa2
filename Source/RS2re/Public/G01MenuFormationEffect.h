#pragma once
#include "CoreMinimal.h"
#include "AppActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppActor -FallbackName=AppActor
#include "EG01MenuFormationEffectResultEnum.h"
#include "G01BattlePartyFormationPoint.h"
#include "G01MenuFormationEffect.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01MenuFormationEffect : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MEffectNameTextID;
    
public:
    AG01MenuFormationEffect(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEffectName(const FName& InEffectNameTextID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetEffectNameTextID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EG01MenuFormationEffectResultEnum ConfirmFormationEffect(const TArray<FG01BattlePartyFormationPoint>& InFormationPointList, int32 InSelfPointIndex);
    
};

