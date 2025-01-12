#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuActorSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuActorSubWindow -FallbackName=G01DebugMenuActorSubWindow
#include "G01DebugFieldPlayerActorSubWindow.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API AG01DebugFieldPlayerActorSubWindow : public AG01DebugMenuActorSubWindow {
    GENERATED_BODY()
public:
    AG01DebugFieldPlayerActorSubWindow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RandomLevelMove();
    
    UFUNCTION(BlueprintCallable)
    FName GetRandomLevel(UDataTable* InTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLevelMoveAble() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableLevel(const FName& InLevelName) const;
    
};

