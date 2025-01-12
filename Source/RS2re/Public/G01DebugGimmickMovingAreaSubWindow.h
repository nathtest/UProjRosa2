#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
#include "G01DebugMenuSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuSubWindow -FallbackName=G01DebugMenuSubWindow
#include "G01DebugGimmickMovingAreaSubWindow.generated.h"

class AManagerBase;

UCLASS(Blueprintable)
class RS2RE_API UG01DebugGimmickMovingAreaSubWindow : public UG01DebugMenuSubWindow {
    GENERATED_BODY()
public:
    UG01DebugGimmickMovingAreaSubWindow();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetManager(EManagerID InManagerId, AManagerBase*& OutManager);
    
};

