#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuSubWindow -FallbackName=G01DebugMenuSubWindow
#include "G01DebugObserverSubWindow.generated.h"

UCLASS(Blueprintable)
class UG01DebugObserverSubWindow : public UG01DebugMenuSubWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CurrentSelectInterfaceType;
    
public:
    UG01DebugObserverSubWindow();

};

