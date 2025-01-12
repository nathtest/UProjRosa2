#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuActorSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuActorSubWindow -FallbackName=G01DebugMenuActorSubWindow
#include "G01BattleCommandUnit.h"
#include "G01DebugBattleEnemyCommandActorSubWindowCommandOverrideStruct.h"
#include "G01DebugBattleEnemyCommandActorSubWindowInf.h"
#include "G01DebugBattleEnemyCommandActorSubWindow.generated.h"

class AActor;

UCLASS(Blueprintable)
class RS2RE_API AG01DebugBattleEnemyCommandActorSubWindow : public AG01DebugMenuActorSubWindow, public IG01DebugBattleEnemyCommandActorSubWindowInf {
    GENERATED_BODY()
public:
    AG01DebugBattleEnemyCommandActorSubWindow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CommandGUI(const FG01BattleCommandUnit& InUnit, const FG01DebugBattleEnemyCommandActorSubWindowCommandOverrideStruct& InOverride, bool InIsValidOverride, bool& OutOverride, AActor*& OutSource, AActor*& OutTarget, FName& OutArtsID);
    

    // Fix for true pure virtual functions not being implemented
};

