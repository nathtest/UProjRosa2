#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuActorSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuActorSubWindow -FallbackName=G01DebugMenuActorSubWindow
#include "G01DebugSpawnActorActorSubWindow.generated.h"

class UObject;

UCLASS(Blueprintable)
class RS2RE_API AG01DebugSpawnActorActorSubWindow : public AG01DebugMenuActorSubWindow {
    GENERATED_BODY()
public:
    AG01DebugSpawnActorActorSubWindow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CallFunction(const FName& InFuncName, UObject* InObject);
    
};

