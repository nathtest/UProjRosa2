#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuSubWindow -FallbackName=G01DebugMenuSubWindow
#include "G01DebugSpawnActorSubWindow.generated.h"

class AActor;
class UActorComponent;

UCLASS(Blueprintable)
class RS2RE_API UG01DebugSpawnActorSubWindow : public UG01DebugMenuSubWindow {
    GENERATED_BODY()
public:
    UG01DebugSpawnActorSubWindow();

    UFUNCTION(BlueprintCallable)
    void GetAllComponent(const AActor* InActor, TArray<UActorComponent*>& OutComponentList);
    
};

