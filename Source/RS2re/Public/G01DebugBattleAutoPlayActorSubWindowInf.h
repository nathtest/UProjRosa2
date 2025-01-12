#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01DebugBattleAutoPlayActorSubWindowInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01DebugBattleAutoPlayActorSubWindowInf : public UInterface {
    GENERATED_BODY()
};

class IG01DebugBattleAutoPlayActorSubWindowInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DebugBattleAutoPlayActorSubWindow_SeekNextAutoPlay(AActor* InSource, bool& OutSuccess, FName& OutArtsID, FName& OutWeaponId, AActor*& OutTarget);
    
};

