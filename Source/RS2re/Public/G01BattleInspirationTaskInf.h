#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BattleInspirationTaskInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleInspirationTaskInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleInspirationTaskInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleInspirationTask_SetupArtsInspiration(FName InArtsID, FName InBaseArtsId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleInspirationTask_GetBaseArtsID(FName& OutArtsID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleInspirationTask_GetArtsID(FName& OutArtsID);
    
};

