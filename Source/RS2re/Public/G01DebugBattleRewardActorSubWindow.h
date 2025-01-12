#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuActorSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuActorSubWindow -FallbackName=G01DebugMenuActorSubWindow
#include "G01DebugBattleRewardActorSubWindowInf.h"
#include "G01DebugBattleRewardActorSubWindow.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01DebugBattleRewardActorSubWindow : public AG01DebugMenuActorSubWindow, public IG01DebugBattleRewardActorSubWindowInf {
    GENERATED_BODY()
public:
    AG01DebugBattleRewardActorSubWindow(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

