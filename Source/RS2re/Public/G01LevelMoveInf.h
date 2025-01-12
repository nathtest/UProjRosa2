#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "LevelTransitionInfoView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelTransitionInfoView -FallbackName=LevelTransitionInfoView
#include "G01LevelMoveInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01LevelMoveInf : public UInterface {
    GENERATED_BODY()
};

class IG01LevelMoveInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FLevelTransitionInfoView Inf_G01LevelMove_GetLevelTransitionID();
    
};

