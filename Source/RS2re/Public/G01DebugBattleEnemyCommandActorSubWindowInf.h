#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01DebugBattleEnemyCommandActorSubWindowInf.generated.h"

class AAppActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01DebugBattleEnemyCommandActorSubWindowInf : public UInterface {
    GENERATED_BODY()
};

class IG01DebugBattleEnemyCommandActorSubWindowInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DebugBattleEnemyCommandActorSubWindow_GetOverrideArts(AAppActor* InSource, bool& OutIsOverride, AAppActor*& OutTarget, FName& OutArtsID);
    
};

