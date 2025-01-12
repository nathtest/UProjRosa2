#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01DebugMainGameManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01DebugMainGameManager : public AManagerBase {
    GENERATED_BODY()
public:
    AG01DebugMainGameManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WindowSetUp();
    
    UFUNCTION(BlueprintCallable)
    void AddMainMenuContent(FName InFuncName, TArray<FString> InNestList, FName InUserData);
    
};

